#include <iostream>
#include <boost/log/trivial.hpp>

int main(int argc, const char* argv[]){
  std::cout << "Hello world from conan" << std::endl;
  BOOST_LOG_TRIVIAL(info) << "logging with boost!";
}
