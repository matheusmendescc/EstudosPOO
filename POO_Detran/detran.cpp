#include <iostream>
#include <string>
#include <list>
#include "detran.h"
#include "automovel.h"
#include "carro.h"
#include "moto.h"

using namespace std;

Detran::Detran(list<Carro> _listaCarro, list<Moto> _listaMoto, string _estadoUF) {
    this->listaCarro = _listaCarro;
    this->listaMoto = _listaMoto;
    this->estadoUF = _estadoUF;
}

//CRUD - Detran (Carro)
void Detran::createCarro(list<Carro> _listaCarro, string _estadoUF) {
    this->listaCarro = _listaCarro;
    this->estadoUF = _estadoUF;
}

void Detran::readCarro(list<Carro> _listaCarro) { //Arrumar o READ
    this->listaCarro = _listaCarro;
    this->totalCarros = _listaCarro.size();
    cout << "Quantidade de Carros Apreendidos: " << this->totalCarros << endl;
}
/*void Detran::updateCarro(int _totalCarros) {
}*/

//void Detran::deleteCarro(list<Carro> _listaCarro) {
//}

/*---------------------------------------------------------------------------*/

//CRUD - Detran (Moto)
void Detran::createMoto(list<Moto> _listaMoto, string _estadoUF) {
    this->listaMoto = _listaMoto;
    this->estadoUF = _estadoUF;
}

void Detran::readMoto(list<Moto> _listaMoto) { //Arrumar o READ
    this->listaMoto = _listaMoto;
    this->totalMotos = _listaMoto.size();
    cout << "Quantidade de Motos Apreendidas: " << this->totalMotos << endl;
}