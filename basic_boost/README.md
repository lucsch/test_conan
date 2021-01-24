# BASIC BOOST

Exemple basic d'un programme intégrant la librairie BOOST depuis conan center

## Installation

- Activer conan 
  
        source venv/bin/activate)
- Créer le répertoire 

        mkdir cmake-build-debug && cd cmake-build-debug
- Installer les librairies nécessaires

        conan install .. -s build_type=Debug
- Créer le projet et compiler

        run cmake .. && - run cmake --build .



