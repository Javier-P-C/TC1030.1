/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 22-Mayo-2020
 * Autor: A001701478 Javier Piña Camacho
 *
 *----------------------------------*/  

#include <iostream>
#include <string>
#include "twodaypackage.h"
#include "overnightpackage.h"
#include "package.h"

using namespace std;

void MostrarDatos(Package &obj);

int main(int argc, char* argv[])
{
  Package pkg1("Daniel","Lucy",800,3.4);
  TwoDayPackage pkg2("Mara","Roberto",45,2.96,21);
  OvernightPackage pkg3("Dante","Virgilio",85,4.2,0.314);
  cout<<pkg1.toString();
  cout<<pkg2.toString();
  cout<<pkg3.toString();
  
  return 0;
}