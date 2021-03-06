#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.h"
#include <string.h>
#include <iostream>

using namespace std;

class Vendedor: public Empregado {
//Atributos
  protected:
    double percentualComissao;
    double novoSalario;

  public:
//Construtor
  Vendedor(string nome, double salario, double percentualComissao);
  
//Metodos
    void setPercentualComissao(double novoPercentual);
    double getPercentualComissao();
    void toString();
    double calcularSalario(double novoSalario);
};

#endif