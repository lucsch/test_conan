#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

#include <iostream>

using namespace cv;

int main() {
  std::string image_path = "/Users/lucien/DATA/PROGRAMATION/test_conan/"
                           "basic_opencv3/src/starry_night.jpg";
  Mat img = imread(image_path, IMREAD_COLOR);

  if (img.empty()) {
    std::cout << "Could not read the image: " << image_path << std::endl;
    return 1;
  }

  imshow("Display window", img);
  int k = waitKey(0); // Wait for a keystroke in the window

  if (k == 's') {
    imwrite("starry_night.png", img);
  }

  return 0;
}