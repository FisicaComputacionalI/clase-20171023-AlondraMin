//Programa que sume N numeros naturales
//Alondra Dominguez Gonzalez 
//23 de Octubre del 2017

#include <iostream>
using namespace std;

int main (){

  int sum=0;
  int count=1;
  int N=0;

  cout<<"Introduce  un numero entero"<<endl;
  cin>> N;
  for (count=0; count<=N; count++)
    {
      sum=sum+count;
    }
  cout<<"La suma de los N numeros naturales es:"<<sum<<endl;
    return 0;
    }
