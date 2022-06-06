#ifndef INGRESSO_H
#define INGRESSO_H
#include <string.h>
#include <iostream>

using namespace std;

//Atributos
class Ingresso{
  protected:
    double valor;



  public:
//Construtor
    Ingresso(double valor);

//Métodos
    void setValor(double novoValor);
    double getValor();
    void toString();
};

#endif