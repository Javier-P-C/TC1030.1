/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 22-Mayo-2020
 * Autor: A001701478 Javier Piña Camacho
 *
 *----------------------------------*/  
#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Package {
  protected:
    string remitente;
    string destinatario;
    float peso;
    float costo_kg;
  public:
    Package(string rm,string dst,float p,float c_kg);
    virtual double CalculaCost();
    string toString();
};

Package::Package(string rm,string dst,float p,float c_kg){
  remitente = rm;
  destinatario = dst;
  if (p > 0){
    peso = p;
  }
  else{
    peso = (-1)*p;
  }
  if (c_kg > 0){
    costo_kg = c_kg;
  }
  else{
    costo_kg = (-1)*c_kg;
  }
}

//TIPO DE DATO DEL MÉTODO
double Package::CalculaCost(){
  return (costo_kg*peso);
}

string Package::toString(){
	stringstream aux;

	aux << "Costo = " << CalculaCost() << " \nRemitente = " << remitente << " \nDestinatario = " << destinatario<<"\n\n\n";
	return aux.str();
}

#endif