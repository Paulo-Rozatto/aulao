#ifndef JOGARDOR_H
#define JOGADOR_H

class Jogador
{
private:
    int numero, pontos;

public:
    Jogador();
    ~Jogador();
    int getNumero();
    void setNumero(int n);
    int getPontos();
    void setPontos(int p);
};

#endif