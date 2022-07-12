#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

// Implementação da Classe (PAI)

    //Construtor
Pessoa::Pessoa(string _nome, int _idade){
    nome = _nome;
    idade = _idade;
}

// Método - setNome()
void Pessoa::setNome(string _nome){
    this -> nome = _nome;
}

// Método - setIdade()
void Pessoa::setIdade(int _idade){
    this->idade = _idade;
}

// Método - getNome()
string Pessoa::getNome(){
    return this->nome;
}

// Método - getIdade()
int Pessoa::getIdade(){
    return this->idade;
}

// Método - toString()
void Pessoa::toString(){
    cout << "Nome: " << getNome() << endl;
    cout << "Idade: " << getIdade() <<endl;
}
