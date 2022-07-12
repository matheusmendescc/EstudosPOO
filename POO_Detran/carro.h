#ifndef CARRO_H
#define CARRO_H
#include <string>
#include <iostream>
#include "automovel.h"

using namespace std;

class Carro : public Automovel {

    //Atributos
protected:
    int portas;
    int tipoMala;

    //Construtor
public:
    Carro(string _marca, string _modelo, int _ano, string _placa, int _portas, int _tipoMala);

    //Métodos
    //Set - Get (Portas)
    void setPortas(int _portas);
    int getPortas();

    //Set - Get (Tipo de Mala)
    void setMala(int _tipoMala);
    int getMala();

    //toString()
    void toString();
};

#endif //CARRO_H