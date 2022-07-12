#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Cliente.h"

using namespace std;
// Main
int main(){
    string nome;
    int idade;
    double salario;
    string plano;

    cout << "Digite o nome da pessoa: ";
    cin >> nome;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Digite seu Salario: ";
    cin >> salario;
    cout << "Digite seu Plano: ";
    cin >> plano;

    Cliente pessoa(nome, idade, salario, plano);
    pessoa.toString();

    return 0;
}