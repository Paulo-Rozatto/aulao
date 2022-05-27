#include "Equipe.h"
#include <iostream>

using namespace std;

Equipe::Equipe(int tam)
{
    n = tam;
    jogadores = new Jogador[tam];
}

Equipe::~Equipe()
{
    delete[] jogadores;
}

void Equipe::imprimeEquipe()
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "numero: " << jogadores[i].getNumero();
        cout << " pontos: " << jogadores[i].getPontos();
        cout << endl;

        total += jogadores[i].getPontos();
    }
    cout << "Total de pontos: " << total << endl;
}

int Equipe::maiorPontuador()
{
    Jogador *maior = &jogadores[0];

    for(int i = 1; i < n; i++) {
        if(jogadores[i].getPontos() > maior->getPontos())
        {
            maior = &jogadores[i];
        }
    }

    return (*maior).getPontos();
    return maior->getPontos();
}