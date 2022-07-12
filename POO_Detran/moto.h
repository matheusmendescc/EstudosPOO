#ifndef MOTO_H
#define MOTO_H
#include <string>
#include <iostream>
#include "automovel.h"

using namespace std;

class Moto : public Automovel {
protected:
    //Atributos
    int cilindradas;

public:
    //Construtor
    Moto(string _marca, string _modelo, int _ano, string _placa, int _cilindradas);

    //Métodos
    //Set - Get (Cilindradas)
    void setCilindradas(int _cilindradas);
    int getCilindradas();

    //toString()
    void toString();
};

#endif //MOTO_H
