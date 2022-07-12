#include <iostream>
#include <string>
#include <list>
#include "automovel.h"
#include "carro.h"
#include "moto.h"
#include "detran.h"

using namespace std;

int main() {
    string marca, modelo, placaC, placaM, estadoUFC, estadoUFM;
    int ano, automovel, i, c;
    //Listas
    list<Carro> lc;
    list<Moto> lm;
    list<string> placaCarro, placaMoto, estadoMoto, estadoCarro; //Listas de placas

    //Aplicação da Classe Detran - Carro
    Detran carro(lc, lm, estadoUFC);
    carro.createCarro(lc, estadoUFC); //Create - Carro

    //Aplicação da Classe Detran - Moto
    Detran moto(lc, lm, estadoUFM);
    moto.createMoto(lm, estadoUFM);

    //Contador
    c = 0;
    cout << "Digite quantos Automóveis deseja listar: ";
    cin >> i;

    while (c < i) {
        cout << "Qual tipo de veículo? " << endl;
        cout << "------------------------------" << endl;
        cout << "1- Carro" << endl;
        cout << "2- Moto" << endl;
        cin >> automovel;

        if (automovel == 1) {
            int portas, tipoMala;
            cout << "Digite a Marca do Carro: ";
            cin >> marca;
            cout << "Digite o Modelo do Carro: ";
            cin >> modelo;
            cout << "Digite o Ano do Carro: ";
            cin >> ano;
            cout << "Digite a Placa do Carro: ";
            cin >> placaC;
            cout << "Digite quantas portas tem o Carro: ";
            cin >> portas; //Atributo Carro
            cout << "Digite o tipo de MALA do Carro: " << endl;
            cout << "1- Hatch" << endl;
            cout << "2- Sedan" << endl;
            cin >> tipoMala; //Atributo Carro

            //Estado de Apreensão
            cout << "Digite o Estado que o veículo foi apreendido(Ex: PB): ";
            cin >> estadoUFC;

            //toString() - Carro
            Carro c1(marca, modelo, ano, placaC, portas, tipoMala);
            //c1.toString();
            cout << endl;

            // Lista de Carros
            lc.push_front(c1); //Isso deveria ser o Update (estudar para resolver DEPOIS)
            placaCarro.push_front(placaC); //Lista de Placas de Carro
            estadoCarro.push_front(estadoUFC);//Lista de UF Carro


        } else {
            int cilindradas;
            cout << "Digite a Marca da Moto: ";
            cin >> marca;
            cout << "Digite o Modelo da Moto: ";
            cin >> modelo;
            cout << "Digite o Ano da Moto: ";
            cin >> ano;
            cout << "Digite a Placa da Moto: ";
            cin >> placaM;
            cout << "Digite quantas Cinlindradas tem a Moto: ";
            cin >> cilindradas; //Atributo Moto

            //Estado de Apreensão
            cout << "Digite o Estado que o veículo foi apreendido(Ex: PB): ";
            cin >> estadoUFM;

            //toString() - Moto
            Moto m1(marca, modelo, ano, placaM, cilindradas);
            //m1.toString();
            cout << endl;

            // Lista de Motos
            lm.push_front(m1); //Isso deveria ser o Update (estudar para resolver DEPOIS)
            placaMoto.push_front(placaM);//Lista de Placas de Moto
            estadoMoto.push_front(estadoUFM);//Lista UF de MOTO
        }
        c++;
    }
    //While - Deseja retirar o carro da Placa tal
    //Aqui entra o Delete
    cout << endl;
    carro.readCarro(lc); //Read - Carro
    moto.readMoto(lm); // Read - Moto

    return 0;
}
