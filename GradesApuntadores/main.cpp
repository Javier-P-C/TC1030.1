/*----------------------------------
 *
 * Laboratorio: Apuntadores en C++
 * Fecha: 5-Junio-2020
 * Autor: A001701478 Javier Piña Camacho
 *
 *----------------------------------*/  

#include <iostream>

#include "grader.h"

using namespace std;

int main(int argc, char* argv[])
{
  Grader maestro("11234142311432231423144231423122342");
  Grader alum1("A01701470","11 3 1133 22322314231432211231 34 2");
  Grader alum2("A01701471","11234142311432231423888831423122342");
  Grader alum3("A01701472","112341423114322314231442314231 23");
  maestro.Calificar(alum1);
  maestro.Calificar(alum2);
  maestro.Calificar(alum3);
  alum1.MostrarGrade();
  alum2.MostrarGrade();
  alum3.MostrarGrade();
}