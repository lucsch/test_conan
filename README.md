# CONAN

Conan permet de simplifier l'installation / compilation des librairies sur les différentes plateformes (Windows, Linux, OSX).

 - Exemple en vidéo : https://www.youtube.com/watch?v=xBLjXdyh3zs

En très résumé, l'outil conan va permettre de télécharger les librairies nécessaires (dépendances) depuis un dépôt distant (par default https://conan.io/center/). Il va ensuite les installer dans un répertoire local du compte utilisateur  (~/.conan).

Pour utiliser ces librairies dans un projet, il faut deux choses :

- Un fichier conanfile.txt qui indique les librairies nécessaires
- Quelques lignes spécifiques dans le fichier CMakeList.txt comme illustré ci-après.

## installation de conan (OSX) 

### sur un env virtuel (conseillé)

    python3 -m venv venv
    source venv/bin/activate
    pip install conan

## Fichier conanfile.txt

Celui-ci doit contenir les librairies nécessaires. Elles seront installée par conan dans notre espace utlisateur :
sur mac : `~/.conan/data/boost/1.75.0/_/_/package/....`

## Fichier CMakeList.txt

Fichier très simple. En plus de notre code, on doit seulement ajouter :

    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
    ...
    add_executable(my_project src/main.cpp)
    target_link_libraries(my_project ${CONAN_LIBS})

## Compilation des exemples

... à faire.

## télécharger les librairies

    mkdir build
    cd build
    conan install .. -s build_type=Debug

ou

    conan install .. -s build_type=Release

Selon le paramètre choisi, il faudra choisir la configuration correspondante pour le build sinon nous 
aurons des problèmes avec MT/ MD/

Release fonctionne avec : 

 - Release
 - RelWithDebInfo


## créer le projet

### Windows

    cmake .. -G "Visual Studio 16 2019" -A x64
    cmake --build . --config RelWithDebInfo



### Unix

    cmake .. 
    cmake --build



