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

- [basic_boost](/basic_boost/README.md)
- [basic_opencv3](/basic_opencv3/README.md)
- [basic_wxwidgets](/basic_wxwidgets/README.md)

## Divers

1. Sur Linux, il faut activer la commande suivante pour supporter le C++11

        conan profile update settings.compiler.libcxx=libstdc++11 default

il faut également installer les outils de développement:

        sudo apt install build-essential
        sudo apt install libgtk-3-dev

2. Si l'on veut utiliser Visual Studio Code comme IDE, il est possible de changer le répertoire de "build" par défault dans : _Preference User Settings_ pour le plugin CMAKE.



