#ifndef BIGINTEGER_H
#define BIGINTEGER_H

#include <iostream>
#include <string.h>

using namespace std;

class BigInteger{
  private:
    int *numero;
    int size;
  public:
    BigInteger(string num);
    BigInteger(BigInteger &bi);
    BigInteger(int num);
    ~BigInteger();
    BigInteger* Add(BigInteger &a);
    void MostrarNumero();
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
  for(int i=0;i<size;i++){
    cout<<numero[i]<<" ";
  }
  cout<<""<<endl;
}

BigInteger::BigInteger(int num)
{
  size=num+1;
  numero = new int[size];
  for(int i= size-1;i>=0;i--){
    numero[i]=0;
    cout<<"bbbb"<<endl;
  }
  for(int i=0;i<size;i++){
    cout<<numero[i]<<" Hola";
  }
}

BigInteger::BigInteger(BigInteger &bi)
{
  string aux1;
  int aux2;
  size=bi.size+1;
  numero = new int[size];
  for(int i= 0;i<bi.size;i++){
    numero[i]=bi.numero[i];
  }
}

BigInteger::~BigInteger(){
  delete [] numero;
}

BigInteger* BigInteger::Add(BigInteger &a)
{
  int borrar;
  int max= (size > a.size)? size : a.size;
  cout<<"\n"<<max;
  BigInteger *result = new BigInteger(max);
  cout<<" aaaa";
	for (int i = 0; i<max+1; i++) {
    cout<<" aaaa"<<endl;
    borrar = numero[i] + a.numero[i];
    cout<<borrar;
		result->numero[i+1] = numero[i] + a.numero[i];
    cout<<result->numero[i]<<"\n";
	}
	return result;
}
void BigInteger::MostrarNumero(){
  cout<<" mostrar ";
  for(int i=0;i<size;i++){
    cout<<numero[i]<<"hjk ";
  }
} 
#endif