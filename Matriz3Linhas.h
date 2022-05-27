#ifndef MATTRIZ_3_LINHAS
#define MATTRIZ_3_LINHAS

class Matriz3Linhas
{
public:
    Matriz3Linhas(int mm, int nn);
    ~Matriz3Linhas();
    float get(int i, int j);
    void set(int i, int j, float val);

private:
    int m, n;
    float *vet;
    int detInd(int i, int j);
};

#endif