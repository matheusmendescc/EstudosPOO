#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H
#include <string>
#include <iostream>

using namespace std;

class Automovel{
protected:
    //Atributos
    string marca;
    string modelo;
    int ano;
    string placa;

public:
    // Construtor
    Automovel(string _marca, string _modelo, int _ano, string _placa);

    //Métodos
    //Set - Get (Marca)
    void setMarca(string _marca);
    string getMarca();

    //Set - Get (Modelo)
    void setModelo(string _modelo);
    string getModelo();

    //Set - Get (Ano)
    void setAno(int _ano);
    int getAno();

    //Set - Get (Placa)
    void setPlaca(string _placa);
    string getPlaca();
};

#endif //AUTOMOVEL_H