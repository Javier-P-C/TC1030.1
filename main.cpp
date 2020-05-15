/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 15-Mayo-2020
 * Autor: A001701478 Javier Piña Camacho
 *
 *----------------------------------*/  

#include <iostream>
#include <string>
#include "triangulos.h"
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
  int opcion = 5;
  float aux;

  Triangulos t1;
  cout << "Se ha creado un triángulo \n Los valores de sus lados son: " << t1.getLado_a() <<", "<< t1.getLado_b() <<" y "<< t1.getLado_c() <<endl;

  while (opcion != 0)
  {
    cout << "¿Qué quiere hacer?"<<"\n"<<"1:Cambiar el valor de los dos lados iguales" <<"\n"<<"2:Cambiar el valor del lado desigual"<<"\n"<<"3:Mostrar el valor del área"<<"\n"<<"4:Mostrar el valor del perímetro"<<"\n"<<"0:Salir del programa";
    cin >> opcion;
    switch (opcion)
    {
      case 1:
        cout <<"\n" << "Ingrese el valor"<<" ";
        cin >> aux;
        t1.setLado_a(aux);
        t1.setLado_b(aux);
        break;
      case 2:
        cout <<"\n"<< "Ingrese el valor"<<" ";
        cin >> aux;
        t1.setLado_c(aux);
        break;
      case 3:
        t1.MostrarArea();
        break;
      case 4:
        t1.MostrarPerimetro();
        break;
      case 0:
        break;
      default:
        cout <<"\n" << "Opción no válida"<<endl;
    }
    cout <<"\n" << "Lado a =" << t1.getLado_a()<<"\n"<<"Lado b =" << t1.getLado_b()<<"\n"<<"Lado c =" << t1.getLado_c()<<"\n"<<endl;
  }
  cout << "Se ha salido del programa";
  return 0;
}