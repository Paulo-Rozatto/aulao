#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h>

#include "Matriz3Linhas.h"
#include "Equipe.h"

using namespace std;

void q1();
void q2();
void q3();
void q4();

int main()
{
    srand(time(NULL));

    // q1();

    // cout << endl;
    // q2();
    // cout << endl;
    // q3();
    // cout << endl;
    q4();
    return 0;
}

int func1(int n, int *vet, int ch)
{
    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        if (vet[i] > ch)
        {
            cont += 1;

            cout << "posicao " << i;
            cout << " valor " << *(vet + i);
            cout << " endereco " << (vet + i) << endl;
        }
    }

    return cont;
}

int *func2(int n, int *vet, int ch, int tam)
{
    int *novo;
    novo = new int[tam];

    int cont = func1(n, vet, ch);

    if (cont == 0)
    {
        delete[] novo;
        return NULL;
    }

    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (vet[i] > ch)
        {
            novo[pos] = vet[i];
            pos++;
        }
    }

    return novo;
}

void q1()
{
    int v[5] = {2, 6, 8, 5, 3};
    int *resul, tam;

    tam = func1(5, v, 4);
    resul = func2(5, v, 4, tam);

    cout << "func 2" << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << resul[i] << " ";
    }
    cout << endl;

    delete[] resul;
}

int sequencia(int n)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;

    // e(n − 1) + 2 × e(n − 2) + 1
    return sequencia(n - 1) + 2 * sequencia(n - 2) + 1;
}

void q2()
{
    cout << "Sequencia: " << sequencia(2) << endl;
}

void q3()
{
    Equipe e(5);

    e.imprimeEquipe();
    // cout << "Maior: " << e.maiorPontuador() << endl;
}

void q4()
{
    Matriz3Linhas m(4, 2);

    m.set(0, 2, 3.0);
    m.set(1, 0, 4.0);
    m.set(3, 0, 9.0);
    m.set(4, 1, 2.0);

    cout << m.get(3, 0) << endl;
}