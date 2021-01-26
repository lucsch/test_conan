# BASIC_WXWIDGETS

## Installation

1. Activate the conan environnement

        source venv/bin/activate

1. We need to add the Bincraft repository :

        conan remote add bincrafters https://api.bintray.com/conan/bincrafters/public-conan

1. Install dependancies

        mkdir cmake-build-debug && cd cmake-build-debug
        conan install .. -s build_type=Debug

1. Building 
    1. Open _basic_wxwidgets_ directory in CLion
    1. Run `cmake` from CLion
    1. Build.
    
