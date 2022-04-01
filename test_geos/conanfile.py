from conans import ConanFile, CMake
import os


class TestGEOS(ConanFile):
    settings = "os", "compiler", "build_type", "arch"

    requires = [
        "gdal/3.4.1"
        #"gdal/3.4.1@terranum-conan+gdal/stable",
        #"geos/3.10.2",
        #"proj/8.1.1",
        #"libcurl/7.80.0",
        #"libdeflate/1.9"
    ]
    generators = "cmake", "gcc", "txt"

    def configure(self):
        #self.options["gdal"].with_curl = True # for xml support
        #self.options["gdal"].shared = True
        if self.settings.os == "Linux":
            self.options["wxwidgets"].webview = False  # webview control isn't available on linux.

    def imports(self):
        # copy libraries
        self.copy("*.dll", dst="bin", src="bin")  # From bin to bin
        self.copy("*.dylib", dst="bin", src="lib")
        if self.settings.os == "Linux":
            self.copy("*.so*", dst="bin", src="lib")

        # copy proj library datum
        if self.settings.os == "Windows" or self.settings.os == "Linux":
            self.copy("*", dst="bin", src="res", root_package="proj")
        if self.settings.os == "Macos":
            self.copy("*", dst="bin/ToolMap.app/Contents/share/proj", src="res", root_package="proj")

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
        cmake.install()
