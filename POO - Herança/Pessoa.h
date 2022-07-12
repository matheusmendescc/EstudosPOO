#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
#include <string>

using namespace std;
//Criação da Classe Pessoa (PAI)

class Pessoa{
    protected:
        // Atributos
        string nome;
        int idade;

    public:
        Pessoa(string _nome, int _idade); // Construtor

        //Métodos
        // SET (void)
        void setNome(string _nome);
        void setIdade(int _idade);

        // GET (retorno)
        string getNome();
        int getIdade();

        // toString()
        virtual void toString(); // Polimorfismo ---> Sobrecarga de funções
};

#endif
