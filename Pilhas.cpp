/*
    AUTOR: ENG RENATO AUGUSTO
    DATA: 28/12/2020
    SOBRE: MANIPULAÇÃO DE PILHAS
   
    MÉTODOS UTILIZADOS: PUSH, POP, TOP
   
    PUSH -> Insere valor na pilha.
    POP -> Remove ultimo valor da pilha
    TOP -> Verifica qual o ultimo valor da pilha
    SIZE -> Tamanho da pilha
   
    Biblioteca
   
    #include <stack>
*/


#include <iostream>
#include <stack> // Biblioteca necessária para trabalhar com conceito de pilhas

using namespace std;

int main()
{
    // stack <tipo da pilha> nome da pilha;
    stack <string> cartas;
   
    cartas.push("Rei de Copas"); // Insere valor na pilha
    cartas.push("Rei de Ouro"); // Insere valor na pilha
    cartas.push("Rei de Espada"); // Insere valor na pilha
    cartas.push("Rei de Paus"); // Insere valor na pilha
   
    cout << "Tamanho da Pilha: " << cartas.size() << "\n\n"; // Exibe tamanho da pilha
   
    cout << "Carta do topo:" << cartas.top() << "\n\n"; // Mostra o valor do topo da pilha
   
    cartas.pop(); // remove carta do topo da pilha
    cartas.pop(); // remove carta do topo da pilha
   
    cout << "Carta do topo:" << cartas.top() << "\n\n"; // Mostra o valor do topo da pilha
   

    return 0;
}

