/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 29-Mayo-2020
 * Autor: A001701478 Javier Piña Camacho
 *
 *----------------------------------*/  

#include <iostream>
#include <string.h>
#include "biginteger.h"

using namespace std;

int main(int argc, char* argv[])
{
  BigInteger *c;
  BigInteger a("2345");
  BigInteger b("462");
  a.MostrarNumero();
  b.MostrarNumero();
  c=a.Add(b);
  cout<<c;
  c->MostrarNumero();
  return 0;
}