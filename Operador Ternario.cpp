/*
    AUTOR: ENG RENATO AUGUSTO
    DATA: 28/12/2020
    SOBRE: C�DIGO ABORDA UMA SIMPLES UTILIZA��O DO OPERADOR CONDICINAL TERN�RIO

    COMO USAR:

    (TESTE L�GICO)? SE VERDADEIRO: SE FALSO;

    IMPORTANTE MANTER OS OPERADORES ?: PARA TER SUCESSO NA COMPILA��O DO C�DIGO.

*/

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Digite um numero!"<< "\n";
    cin >> number;

    //(number!=0)?number++:number=999; // condicional tern�rio substitui o c�digo abaixo para resultados simples

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
