#include "Gerente.h"
#include <iostream>
#include <string.h>

using namespace std;

Gerente::Gerente(string nome, double salario, string departamento) : Empregado(nome, salario) {
  this->departamento = departamento;
}

//Metodo - Departamento

void Gerente::setDepartamento(string novoDepartamento){
  this->departamento = novoDepartamento;
}

string Gerente::getDepartamento(){
  return this->departamento;
}

void Gerente::toString(){
  cout << "Nome: " << getNome() << endl;
  cout << "Salário: " << getSalario() << endl;
  cout << "Departamento: " << getDepartamento() << endl;
}