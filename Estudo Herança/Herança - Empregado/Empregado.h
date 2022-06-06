#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string.h>
#include <iostream>

using namespace std;

class Empregado{

//Atributos
  protected:
    double salario;

  public:
    string nome;

//Construtor
  Empregado(string nome, double salario);

//Métodos

  //Setar Nome
  void setNome(string novoNome);
  string getNome();

  //Setar Salário
  void setSalario(double novoSalario);
  double getSalario();
  void toString();

};
  
#endif