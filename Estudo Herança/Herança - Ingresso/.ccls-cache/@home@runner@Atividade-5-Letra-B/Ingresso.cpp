#include "Ingresso.h"
#include <iostream>
#include <string.h>

using namespace std;

Ingresso::Ingresso(double valor){
  setValor(valor);
}

void Ingresso::setValor(double novoValor){
  this->valor = novoValor;
}

double Ingresso::getValor(){
  return this->valor;
}

void Ingresso::toString(){
  cout << "Valor do Ingresso: R$ " << getValor() << endl;
}