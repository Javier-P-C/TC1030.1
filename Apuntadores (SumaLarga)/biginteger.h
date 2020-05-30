#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <iostream>
#include <string.h>

using namespace std;

class BigInteger{
  private:
    int *numero;
    int size;
    int *arregloaux;
  public:
    BigInteger(string num);
    BigInteger(BigInteger &bi);
    BigInteger(int num);
    ~BigInteger();
    BigInteger* Add(BigInteger &a);
    void MostrarNumero();
    void Ajustar(int num,bool opcion);
};

BigInteger::BigInteger(string num)
{
  string aux1;
  int aux2;
  size=num.length(); 
  numero = new int[size];
  for(int i= size-1;i>=0;i--){
    aux1=num[i];
    aux2=stoi(aux1);
    numero[i]=aux2;
  }
  arregloaux=NULL;
}

BigInteger::BigInteger(int num)
{
  size=num+1;
  numero = new int[size];
  for(int i= size-1;i>=0;i--){
    numero[i]=0;
  }
  arregloaux=NULL;
}

BigInteger::BigInteger(BigInteger &bi)
{
}

BigInteger::~BigInteger(){
  delete [] numero;
  delete [] arregloaux;
}

BigInteger* BigInteger::Add(BigInteger &a)
{
  int borrar;
  int max= (size > a.size)? size : a.size;
  BigInteger *result = new BigInteger(max);
  if((a.size<size)||(a.size==size))
  {
    if (a.size<size)
    {
      bool opcion = true;
      a.Ajustar(max, opcion);
    }
    else if (a.size==size)
    {
      bool opcion = false;
        a.Ajustar(max, opcion);
    }
    for (int i = 0; i<max+1; i++) 
    {
      result->numero[i+1] = numero[i] + a.arregloaux[i];
    }
  }
  else
  {
    bool opcion = true;
    Ajustar(max, opcion);
    for (int i = 0; i<max+1; i++) 
    {
      result->numero[i+1] = a.numero[i] + arregloaux[i];
    }
  }
  for (int i = 0; i<max+1; i++)
  {
    if((i>0)&&(result->numero[i]>9))
    {
      result->numero[i-1]++;
      result->numero[i]-=10;
    }
  }
	return result;
}

void BigInteger::MostrarNumero(){
  for(int i=0;i<size;i++){
    cout<<numero[i];
  }
  cout<<endl;
} 

void BigInteger::Ajustar(int max,bool opcion)
{
  arregloaux=new int[max];
  int aux;
  if(opcion==true)
  {
    aux=max-size;
    for(int i=0;i<max;i++)
    {
      if(i<aux)
      {
        arregloaux[i]=0;
      }
      else
      {
        arregloaux[i]=numero[i-aux];
      }
    }
    size=max;
  }
  else
  {
    size = max;
    for(int i=0;i<size;i++)
    {
    arregloaux[i]=numero[i];
    }
  }
  delete [] numero;
}
#endif