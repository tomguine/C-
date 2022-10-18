// Gerar números randômicos e decimais


#include <stdio.h>
#include <stlib.h>
#include <time.h>


int main()
{
    srand( static_cast<unsigned int>(time(nullptr))); // esse não dá erro
    srand(time(NULL)); // certifica que o randômico seja de fato randômico.
    float randômicos;
    randômicos=rand()%101; // gera números de 0 a 100, ou seja, 101 opções
    randômicos=randômicos/10; // divide por 10 para criar casas decimais, então de 0 - 10,0
}
