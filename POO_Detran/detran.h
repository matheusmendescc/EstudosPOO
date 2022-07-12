#ifndef DETRAN_H
#define DETRAN_H
#include <iostream>
#include <string>
#include <list>
#include "carro.h"
#include "moto.h"

using namespace std;

class Detran {
private:
    //Atributos
    list<Carro> listaCarro;
    list<Moto> listaMoto;
    string estadoUF;
    int totalCarros;
    int totalMotos;

public:
    //Construtor
    Detran(list<Carro> _listaCarro, list<Moto> _listaMoto, string _estadoUF);
//private:
    //Métodos
    //Crud CARRO
    void createCarro(list<Carro> _listaCarro, string _estadoUF);
    void readCarro(list<Carro> _listaCarro);
    //void updateCarro(int _totalCarros);
    //void deleteCarro(list<Carro> _listaCarro);

    //Crud MOTO
    void createMoto(list<Moto> _listaMoto, string _estadoUF);
    void readMoto(list<Moto> _listaMoto);
    //void updateMoto();
    //void deleteMoto();
};

#endif //DETRAN_H