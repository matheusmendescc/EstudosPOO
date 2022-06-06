#ifndef VIP_H
#define VIP_H
#include "Ingresso.h"
#include <string.h>
#include <iostream>

using namespace std;

class Vip: public Ingresso{
  protected:
    double valorAdicional;

  public:
    //Construtor
    Vip(double valor, double valorAdicional);

    //Metodos
    void setAdicional(double novoAdicional);
    double getAdicional();
    void toString();
    
};

#endif