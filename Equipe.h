#ifndef EQUIPE_H
#define EQUIPE_H

#include "Jogador.h"

class Equipe
{
private:
    int n;
    Jogador *jogadores;

public:
    Equipe(int tam);
    ~Equipe();
    void imprimeEquipe();
    int maiorPontuador();
};

#endif