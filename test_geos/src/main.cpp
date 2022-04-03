#include "gdal_priv.h"
#include "ogr_geometry.h"
#include <iostream>

int main(int argc, const char *argv[]) {
  std::cout << "Hello world from conan" << std::endl;
  GDALAllRegister();
  if (OGRGeometryFactory::haveGEOS()) {
    std::cout << "GEOS OK!" << std::endl;
  } else {
    std::cout << "NO GEOS IN GDAL!" << std::endl;
  }

  // testing union (GEOS is needed)
  OGRGeometry *p1 = nullptr;
  OGRGeometry *p2 = nullptr;
  OGRGeometry *p3 = nullptr;
  OGRGeometryFactory::createFromWkt("POINT(10 20)", NULL, &p1);
  OGRGeometryFactory::createFromWkt("POINT(30 20)", NULL, &p2);
  p3 = p1->Union(p2);
  return 0;
}
