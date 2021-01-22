# CONAN

Conan permet de simplifier l'installation / compilation de librairies sur les différentes plateformes.

 - Exemple en vidéo : https://www.youtube.com/watch?v=xBLjXdyh3zs


## installation de conan (OSX) 

### sur un env virtuel (conseillé)

    python3 -m venv venv
    source venv/bin/activate
    pip install conan

## créer un fichier conanfile.txt

Celui-ci doit contenir les librairies nécessaires. Elles seront installée par conan dans notre espace utlisateur :
sur mac : `~/.conan/data/boost/1.75.0/_/_/package/....`

## créer un fichier CMakeList.txt

Fichier très simple. En plus de notre code, on doit seulement ajouter :

    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()

Les différentes librairies sont directement renseignées dans le fichier `conanbuildinfo.cmake`

## télécharger les librairies

    mkdir build
    cd build
    conan install ..

## créer le projet

    cmake .. -G <nom_du_generateur>
    cmake --build


