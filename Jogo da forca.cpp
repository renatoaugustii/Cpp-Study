/*
    AUTOR: ENG RENATO AUGUSTO
    DATA: 28/12/2020
    SOBRE: Jogo da Forca
*/

#include <iostream>
using namespace std;

int main()
{
   int i = 0, tamanho = 0, tentativa = 6, acertos = 0;
   char palavra[30], secreta[30], letra ='0';
   bool acertou = false, ganhou = false,sair = false;

   cout << "JOGO DA FORCA" << "\n\n";
   cout << "Digite uma palavra secreta:" << "\n\n";

   cin >> palavra;
   system ("cls");

   while (palavra[i]!='\0')
   {
        i++;
        tamanho ++;
   }

   for (i=0; i<tamanho; i++)
    {
        secreta[i]= '-';
   }

   while(sair == false){

     system ("cls");
     cout << "JOGO DA FORCA" << "\n\n";
     //cout << acertos;
     cout << "Voce tem " << tentativa << " tentativas." << "\n\n";
     cout << secreta << "\n\n";
     //if (acertou == true){cout << "Voce acertou a letra!" << "\n\n"; acertou = false;}
     cout << "Digite uma letra:" << "\n\n";
     cin >> letra;
         for (i=0; i<tamanho; i++){
             if(palavra[i]==letra){
                secreta[i]=letra;
                acertos++;
                acertou = true;
             }
         }
     if(acertou==true){acertou = false;}else{tentativa--;acertou = false;}
     if(acertos>=(tamanho)){ganhou=true;sair=true;}
     if(tentativa==0){sair = true;}
   }

     if (ganhou==true){
         system ("cls");
         cout << "JOGO DA FORCA" << "\n\n";
         cout << "PARABENS VOCE GANHOU" << "\n\n";
     }

     else
     {
         system ("cls");
         cout << "JOGO DA FORCA" << "\n\n";
         cout << "VOCE PERDEU, TENTE UMA PROXIMA VEZ!" << "\n\n";
         system ("PAUSE");
     }

    return 0;
}
