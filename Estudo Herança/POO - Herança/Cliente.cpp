#include <iostream>
#include <string>
#include "Cliente.h"

using namespace std;

//Implementação da Classe (FILHA)

// Construtor
Cliente::Cliente(string _nome, int _idade, double _salario, string _plano):Pessoa(_nome, _idade){
    salario = _salario;
    plano = _plano;
}
// Método - setSalario()
void Cliente::setSalario(double _salario){
    this->salario = _salario;
}
// Método - getSalario()
double Cliente::getSalario(){
    return salario;
}

// Método - setPlano()
void Cliente::setPlano(string _plano){
    this->plano = _plano;
}

//Método - getPlano()
string Cliente::getPlano(){
    return this->plano;
}

// Método - toString()
void Cliente::toString(){
    cout << endl;
    Pessoa::toString(); //Trazer elementos do toString() da classe PAI
    cout << "Salario: R$ " << getSalario() << endl;
    cout << "Plano: " << getPlano() << endl;
}