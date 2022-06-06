#include <iostream>
#include "Empregado.h"
#include "Gerente.h"
#include "Vendedor.h"
#include <string.h>

using namespace std;

int main() {
  int escolha;
  string nome, departamento;
  double salario, comissao;

  cout << "Digite: " << endl;
  cout << "1 - Gerente" << endl;
  cout << "2 - Vendedor" << endl;
  cin >> escolha;

  if(escolha == 1){
    cout << "Digite o nome do Gerente: ";
    cin >> nome;
    cout << "Digite o seu salário: ";
    cin >> salario;
    cout << "Digite seu departamento: ";
    cin >> departamento;

    cout << endl;

    Gerente novoGerente(nome, salario, departamento);
    
    novoGerente.toString();

  } else if(escolha == 2){
    cout << "Digite o nome do Vendedor: ";
    cin >> nome;
    cout << "Digite o seu salário: ";
    cin >> salario;
    cout << "Digite o percentual de sua comissão: ";
    cin >> comissao;

    cout << endl;

    Vendedor novoVendedor(nome, salario, comissao);
    novoVendedor.toString();
    
  } else{
    cout << "Desculpa, opção inválida" << endl;
  }

  return 0;
}