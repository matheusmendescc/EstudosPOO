#ifndef GERENTE_H
#define GERENTE_H
#include "Empregado.h"
#include <string.h>
#include <iostream>

using namespace std;

class Gerente: public Empregado {
//Atributos
  protected:
    string departamento;

  public:
//Construtor
  Gerente(string nome, double salario, string departamento);
  
//Metodos
    void setDepartamento(string novoDeparmento);
    string getDepartamento();
    void toString();
};

#endif