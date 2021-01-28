# BASIC_OPENCV3

## activer conan

    source venv/bin/activate (Unix / OSX)
    venv\Scripts\activate.bat (Windows)

## télécharger les librairies

    mkdir build
    cd build
    conan install .. -s build_type=Debug

ou

    conan install .. -s build_type=Release

## créer le projet

### Windows

    cmake .. -G "Visual Studio 16 2019" -A x64
    cmake --build . --config RelWithDebInfo 
    ou
    cmake --build . --config Debug

### Unix / OSX

    cmake .. 
    cmake --build
    