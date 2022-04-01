#include <iostream>
#ifndef HAVE_GEOS
#define HAVE_GEOS
#endif
#include "gdal_priv.h"
#include "ogr_geometry.h"

int main(int argc, const char* argv[]){
  std::cout << "Hello world from conan" << std::endl;
  GDALAllRegister();

//  OGRGeometry * p1 = nullptr;
//  OGRGeometry * p2 = nullptr;
//  OGRGeometry * p3 = nullptr;
//  OGRGeometryFactory::createFromWkt("POINT(10 20)", NULL, &p1);
//  OGRGeometryFactory::createFromWkt("POINT(30 20)", NULL, &p2);
//  p3 = p1->Union(p2);
  std::cout << "GEOS" << OGRGeometryFactory::haveGEOS() << std::endl ;
  return 0;
}
