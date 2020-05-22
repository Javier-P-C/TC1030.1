/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 22-Mayo-2020
 * Autor: A001701478 Javier Piña Camacho
 *
 *----------------------------------*/  
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include "package.h"

using namespace std;

class OvernightPackage : public Package {
  private:
    float tarifa_c_kg;
  public:
    OvernightPackage(string rm,string dst,float p,float c_kg,float tr_c_kg);
    double CalculaCost();
};

OvernightPackage::OvernightPackage(string rm,string dst,float p,float c_kg,float tr_c_kg)
:Package(rm,dst,p,c_kg){
  tarifa_c_kg = tr_c_kg;
}

double OvernightPackage::CalculaCost(){
  return (Package::CalculaCost()+peso*tarifa_c_kg);
}

#endif