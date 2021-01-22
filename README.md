# Test CONAN

## installation de conon (OSX) 

    python3 -m venv venv
    source venv/bin/activate
    pip install conan

## créer un fichier conanfile.txt

Celui-ci doit contenir les librairies nécessaires

## créer un fichier CMakeList.txt

Fichier très simple. En plus de notre code, on doit seulement ajouter :

    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()

## télécharger les librairies

    mkdir build
    cd build
    conan install ..

## créer le projet

    cmake .. -G <nom_du_generateur>
    cmake --build


