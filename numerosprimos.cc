//Identificar numeros primos
//Alondra Dominguez Gonzalez 
//23 de Octubre del 2017

#include <iostream>
using namespace std;

int main (){

  int N=0;
  int primo = 0;
  cout<<"Dame un numero entero"<<endl;
  cin>> N;
  for (int i=2; i<=(N/2); i++)
    {
      if ((N%i)==0){
	primo = 1;
	break;
      }
    }
  if (primo==0)
    cout<<"tu numero es primo"<<endl;
  else
  cout<<"tu numero no es primo"<<endl;
    return 0;
    }
