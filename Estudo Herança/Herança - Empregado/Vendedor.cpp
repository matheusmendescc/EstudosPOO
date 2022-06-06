#include "Vendedor.h"
#include <iostream>
#include <string.h>

using namespace std;

Vendedor::Vendedor(string nome, double salario, double percentualComissao) : Empregado(nome, salario) {
  this->percentualComissao = percentualComissao;
}

//Metodo - Percentual Comissão

void Vendedor::setPercentualComissao(double novoPercentual){
  this->percentualComissao = novoPercentual;
}

double Vendedor::getPercentualComissao(){
  return this->percentualComissao;
}

double Vendedor::calcularSalario(double novoSalario){
  novoSalario = salario + (salario*(percentualComissao/100));
  return novoSalario;
}

void Vendedor::toString(){
  cout << "Nome: " << getNome() << endl;
  cout << "Salario: " << getSalario() << endl;
  cout << "Comissão: " << getPercentualComissao() << endl;
  cout << "Novo Salário (+Comissão): " << calcularSalario(novoSalario) << endl;
}