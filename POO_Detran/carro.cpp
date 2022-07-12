#include <string>
#include "carro.h"
#include "automovel.h"

using namespace std;

//Construtor
Carro::Carro(string _marca, string _modelo, int _ano, string _placa, int _portas, int _tipoMala) : Automovel(_marca, _modelo, _ano, _placa){
    setPortas(_portas);
    setMala(_tipoMala);
}

//Set - Get (Portas)
void Carro::setPortas(int _portas) {
    this->portas = _portas;
}

int Carro::getPortas() {
    return this->portas;
}

//Set - Get (Tipo de Mala)
void Carro::setMala(int _tipoMala) {
    this->tipoMala = _tipoMala;
}

int Carro::getMala() {
    return this->tipoMala;
}

//toString()
void Carro::toString() {
    cout << "---------- CARRO CADASTRADO ----------" << endl;
    cout << "Marca: " << getMarca() << endl;
    cout << "Modelo: " << getModelo() << endl;
    cout << "Ano: " << getAno() << endl;
    cout << "Placa: " << getPlaca()<< endl;
    cout << "Numero de Portas: " << getPortas() << endl;
    if (tipoMala == 1){
        cout << "Tipo de Mala: " << "Hatch" << endl;
    } else{
        cout << "Tipo de Mala: " << "Sedan" << endl;
    }
}