/*
    AUTOR: ENG RENATO AUGUSTO
    DATA: 28/12/2020
    SOBRE: MANIPULA��O DE VETORES

*/

#include <iostream>

using namespace std;

int main()
{
    int tam = 5; // tamanho do vetor
    int vetor [tam]; // Cria��o de vetor com 5 posi��es
    int i = 0; // Inicia uma vari�vel como inteiro

    vetor[0]=10; // Posi��o 0 do vetor recebe 10
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;

    for (i=0; i<tam; i++ ) // La�o de repeti��o FOR
    //
    {
        cout << vetor[i] << "\n"; // Leitura de todos os valores do Array utilizando la�o de repeti��o FOR
    }


    return 0;
}
