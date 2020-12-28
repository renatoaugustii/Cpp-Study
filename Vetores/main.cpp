/*
    AUTOR: ENG RENATO AUGUSTO
    DATA: 28/12/2020
    SOBRE: MANIPULAÇÃO DE VETORES

*/

#include <iostream>

using namespace std;

int main()
{
    int tam = 5; // tamanho do vetor
    int vetor [tam]; // Criação de vetor com 5 posições
    int i = 0; // Inicia uma variável como inteiro

    vetor[0]=10; // Posição 0 do vetor recebe 10
    vetor[1]=20;
    vetor[2]=30;
    vetor[3]=40;
    vetor[4]=50;

    for (i=0; i<tam; i++ ) // Laço de repetição FOR
    //
    {
        cout << vetor[i] << "\n"; // Leitura de todos os valores do Array utilizando laço de repetição FOR
    }


    return 0;
}
