#include "Vip.h"
#include <iostream>
#include <string.h>

using namespace std;

Vip::Vip(double valor, double valorAdicional) : Ingresso(valor){
  setAdicional(valorAdicional);
}

void Vip::setAdicional(double novoAdicional){
  this->valorAdicional = novoAdicional;
}

double Vip::getAdicional(){
  return this->valorAdicional;
}


void Vip::toString(){
  cout << "Valor Ingresso (Convencional): R$ " << getValor() << endl;
  cout << "Valor Ingresso (VIP): " << getValor() + getAdicional() << endl;
}