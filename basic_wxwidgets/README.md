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
   
1. Building from the command line 
   
   In _basic_wxwidgets_ directory:

         mkdir build-release && cd build-release
         conan install ..
         cmake .. 
         cmake --build . --config Release
      
    
## Misc

1. In Linux, run the following command to use C++11: 

        conan profile update settings.compiler.libcxx=libstdc++11 default

2. If using Visual Studio Code, change the build directory in the _Preference User Settings_ for the CMAKE plugins
