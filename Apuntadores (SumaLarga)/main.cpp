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
  //Aquí van los números que quiera sumar
  BigInteger a("3562138565");
  BigInteger b("2147483647");

  //a.MostrarNumero();
  //b.MostrarNumero();

  //Aquí se suman
  c=a.Add(b);

  //Linberamos espacio
  a.~BigInteger();
  b.~BigInteger();
  //cout<<c;

  //Resultado
  c->MostrarNumero();

  return 0;
}