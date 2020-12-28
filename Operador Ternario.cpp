/*
    AUTOR: ENG RENATO AUGUSTO
    DATA: 28/12/2020
    SOBRE: CÓDIGO ABORDA UMA SIMPLES UTILIZAÇÃO DO OPERADOR CONDICINAL TERNÁRIO

    COMO USAR:

    (TESTE LÓGICO)? SE VERDADEIRO: SE FALSO;

    IMPORTANTE MANTER OS OPERADORES ?: PARA TER SUCESSO NA COMPILAÇÃO DO CÓDIGO.

*/

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Digite um numero!"<< "\n";
    cin >> number;

    //(number!=0)?number++:number=999; // condicional ternário substitui o código abaixo para resultados simples

    /*
            if (number!=0){
                number = number + 1;
            }
            else
            {
                number = 999;
            }
    */

    cout << number;
    return 0;
}
