#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

//Criação da Classe Cliente (FILHA)
class Cliente : public Pessoa{
    private:
    //Atributos
        double salario;
        string plano;
    public:
    //Construtor
        Cliente(string _nome, int _idade, double _salario, string _plano);

    //Métodos
        //SET (void)
        void setSalario(double _salario);
        void setPlano(string _plano);

        //GET (retorno)
        double getSalario();
        string getPlano();

        //toString
        void toString();
};

#endif