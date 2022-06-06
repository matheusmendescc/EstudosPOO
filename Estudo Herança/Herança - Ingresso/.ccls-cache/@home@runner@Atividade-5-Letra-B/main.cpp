#include <iostream>
#include "Ingresso.h"
#include "Vip.h"
#include <string.h>

using namespace std;

int main() {
  int escolha;
  double ingresso, ingressoVip;

  cout << "Digite: " << endl;
  cout <<  "1 - Ingresso Comum" << endl;
  cout << "2 - Ingresso VIP" << endl;
  cin >> escolha;

  if(escolha == 1){
    cout << "Digite o valor do Ingresso: ";
    cin >> ingresso;
    cout << endl;

    Ingresso novoIngresso(ingresso);

    novoIngresso.toString();
    
  } else if(escolha == 2){
      cout << "Digite o valor do Ingresso: ";
      cin >> ingresso;
      cout << "Digite o valor adicional: ";
      cin >> ingressoVip;
  
      Vip novoIngressoVip(ingresso, ingressoVip);

      novoIngressoVip.toString();
      
    } else{
    cout << "Desculpa, opção inválida" << endl;
  }
  
  return 0;
}