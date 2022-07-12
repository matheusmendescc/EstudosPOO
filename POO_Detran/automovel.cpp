#include <string>
#include "automovel.h"
using namespace std;

//Construtor
Automovel::Automovel(string _marca, string _modelo, int _ano, string _placa) {
    marca = _marca;
    modelo = _modelo;
    ano = _ano;
    placa = _placa;
}

//Set - Get (Marca)
void Automovel::setMarca(string _marca) {
    this->marca=_marca;
}

string Automovel::getMarca() {
    return this->marca;
}

//Set - Get (Modelo)
void Automovel::setModelo(string _modelo) {
    this->modelo=_modelo;
}

string Automovel::getModelo() {
    return this->modelo;
}

//Set - Get (Ano)
void Automovel::setAno(int _ano) {
    this->ano=_ano;
}

int Automovel::getAno() {
    return this->ano;
}

//Set - Get (Placa)
void Automovel::setPlaca(string _placa) {
    this->placa=_placa;
}

string Automovel::getPlaca() {
    return this->placa;
}