#include "Jogador.h"
#include <stdlib.h> /* srand, rand */
#include <time.h>

Jogador::Jogador()
{
    pontos = rand() % 100;
    numero = rand() % 50 + 1;
}

Jogador::~Jogador() {}

int Jogador::getNumero()
{
    return numero;
}

int Jogador::getPontos()
{
    return pontos;
}

void Jogador::setNumero(int n)
{
    this->numero = n;
}

void Jogador::setPontos(int p)
{
    this->pontos = p;
}