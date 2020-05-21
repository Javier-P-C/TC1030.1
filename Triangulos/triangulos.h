/*----------------------------------
 *
 * Laboratorio: POO y C++
 * Fecha: 15-Mayo-2020
 * Autor: A001701478 Javier Piña Camacho
 *
 *----------------------------------*/  

#ifndef TRIANGULOS_H
#define TRIANGULOS_H
#include <math.h>
#include <iostream>

using namespace std;

class Triangulos
{
  private:
    float lado_a;
    float lado_b;
    float lado_c;
  public:
    Triangulos();
    float getLado_a() const;
    float getLado_b() const;
    float getLado_c() const;
    void setLado_a(float a);
    void setLado_b(float b);
    void setLado_c(float c);
    void MostrarArea();
    void MostrarPerimetro();
};

Triangulos::Triangulos()
{
  lado_a=0;
  lado_b=0;
  lado_c=0;
}

float Triangulos::getLado_a() const
{
  return lado_a;
}

float Triangulos::getLado_b() const
{
  return lado_b;
}

float Triangulos::getLado_c() const
{
  return lado_c;
}

void Triangulos::setLado_a(float a)
{
  lado_a=a;
}

void Triangulos::setLado_b(float b)
{
  lado_b=b;
}

void Triangulos::setLado_c(float c)
{
  lado_c=c;
}

void Triangulos::MostrarArea()
{
  float area;
  area=(lado_c*sqrt(pow(lado_a,2)-pow((lado_c/2),2)))/2;
  if ((lado_a+lado_b)>lado_c)
  {
    cout<< "El área del triángulo es " << area << endl;
  }
  else
  {
    cout << "\nNo existe un triángulo isósceles de esas proporciones, para que sea un trángulo isósceles debe cumplir con a+b>c" << endl;
  }
}

void Triangulos::MostrarPerimetro()
{
  float perimetro;
  perimetro=lado_a+lado_b+lado_c;
  if((lado_a+lado_b)>lado_c)
  {
    cout<< "El perímetro del triángulo es " << perimetro << endl;
  }
  else
  {
    cout << "\nNo existe un triángulo isósceles de esas proporciones, para que sea un trángulo isósceles debe cumplir con a+b>c" << endl;
  }
}

#endif
