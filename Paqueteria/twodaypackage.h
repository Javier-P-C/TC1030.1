/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 22-Mayo-2020
 * Autor: A001701478 Javier Piña Camacho
 *
 *----------------------------------*/  
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include "package.h"

using namespace std;

class TwoDayPackage : public Package {
  private:
    double tarifa;
  public:
    TwoDayPackage(string rm,string dst,float p,float c_kg,float tar);
    double CalculaCost();
};

TwoDayPackage::TwoDayPackage(string rm,string dst,float p,float c_kg,float tar)
:Package(rm,dst,p,c_kg){
  tarifa = tar;
}

double TwoDayPackage::CalculaCost(){
  return (Package::CalculaCost() + tarifa);
}

#endif