#include <iostream>
#include "Matriz3Linhas.h"

using namespace std;

Matriz3Linhas::Matriz3Linhas(int mm, int nn)
{
    this->m = mm;
    this->n = nn;

    if (mm <= 0 && nn <= 0)
    {
        cout << "erro" << endl;
        exit(1);
    }

    this->vet = new float[3 * nn];
}

Matriz3Linhas::~Matriz3Linhas()
{
    delete[] vet;
}

int Matriz3Linhas::detInd(int i, int j)
{
    if (i < 0 || i >= m || j < 0 || j >= n)
        return -1;

    int meio;

    if (m % 2 == 0)
        meio = (m + 1) / 2;
    else
        meio = m / 2;

    if (i != 0 && i != meio && i != m - 1)
        return -2;

    if (i == 0)
        return vet[j];

    if (i == meio)
        return vet[n + j];

    return vet[2 * n + j];
}

float Matriz3Linhas::get(int i, int j)
{
    int indice = detInd(i, j);

    if (indice == -1)
    {
        cout << "indices invalidos" << endl;
        return -1;
    }
    else if (indice == -2)
    {
        return 0;
    }

    return vet[indice];
}

void Matriz3Linhas::set(int i, int j, float val)
{
    int indice = detInd(i, j);

    if (indice == -1)
        std::cout << "Indices invalidos" << std::endl;
    else if (indice == -2)
        std::cout << "Regiao obrigatoriamente nula" << std::endl;
    else
        vet[indice] = val;
}