# BASIC_WXWIDGETS

Exemple simple d'une application wxWidgets. Ce code peut servir de modèle pour d'autres applications. Contrairement à l'exemple _minimal_ de wxWidgets, le code a été séparé en plusieurs fichiers pour les classes **App** et **Frame**.

## activer conan

    source venv/bin/activate (Unix / OSX)
    venv\Scripts\activate.bat (Windows)

## ajouter le dépôt Bincraft 

    conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan

## télécharger les librairies

    mkdir cmake-build-debug
    cd cmake-build-debug
    conan install .. -s build_type=Debug

ou

    mkdir cmake-build-release
    cd cmake-build-release
    conan install .. -s build_type=Release

## Créer le project et le construire
C'est possible grace à l'utilisation du fichier 'conanfile.py' en lieu en place du fichier 'conanfile.txt'.

    conan build ..

## Créer le projet (manuellement)

### Windows

    cmake .. -G "Visual Studio 16 2019" -A x64
    cmake --build . --config Release 
    ou
    cmake --build . --config Debug

### Unix / OSX

    cmake .. 
    cmake --build

### Avec CLION

1. Ouvrir le réptertoire _basic_wxwidgets_ dans CLion
1. File > Reload Cmake Project
1. Build > Build Project
