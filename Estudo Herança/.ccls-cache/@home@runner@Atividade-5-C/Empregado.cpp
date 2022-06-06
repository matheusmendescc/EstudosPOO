#include "Empregado.h"
#include <iostream>
#include <string.h>

using namespace std;

Empregado::Empregado(string nome, double salario){
  this -> nome = nome;
  this -> salario = salario;
}

//Metodo - Nome

void Empregado::setNome(string novoNome){
  this->nome = novoNome;
}

string Empregado::getNome(){
  return this->nome;
}

//Metodo - Salario

void Empregado::setSalario(double novoSalario){
  this->salario = novoSalario;
}

double Empregado::getSalario(){
  return this->salario;
}

void Empregado::toString(){
  cout << "Nome: " << getNome() << endl;
  cout << "Salário: " << getSalario() << endl;
}