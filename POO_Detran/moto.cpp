#include <string>
#include "moto.h"
#include "automovel.h"

using namespace std;

//Construtor
Moto::Moto(string _marca, string _modelo, int _ano, string _placa, int _cilindradas) : Automovel(_marca, _modelo, _ano, _placa){
    setCilindradas(_cilindradas);
}

//Set - Get (Cilindradas)
void Moto::setCilindradas(int _cilindradas) {
    this->cilindradas = _cilindradas;
}

int Moto::getCilindradas() {
    return this->cilindradas;
}

//toString()
void Moto::toString() {
    cout << "---------- MOTO CADASTRADA ----------" << endl;
    cout << "Marca: " << getMarca() << endl;
    cout << "Modelo: " << getModelo() << endl;
    cout << "Ano: " << getAno() << endl;
    cout << "Placa: " << getPlaca()<< endl;
    cout << "Cilindradas: " << getCilindradas();
    cout << endl;
}