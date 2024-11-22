// blibiotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Faça um programa que receba um nome, ele deve perguntar
novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber
um nome com 5 caracteres ou mais o programa exibe o nome e finaliza*/

void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer

int main (){
  setlocale(LC_ALL, ""); // poder usar pontuações

char nomes[20]; // vetor nomes
int rep, tamanho; // variaveis 

for( int rep = 1;rep > 0; rep ++){ // looping infinito
printf("Digite um nome:\n"); // pedindo pro usuario digitar um nome
scanf("%20[^\n]s",nomes); // armazendnado nome
limpar_buffer(); // limpando lixo
tamanho = strlen(nomes); // igualando espaco do veto utilizado para o nome igual tamnho

if (tamanho > 5){ // condição se tamnaho for menor que 5
  printf("Nome: %s\nFinalizando programa...\n",nomes); // avisa que o programa esta preste a finalizar
   return 0; // finaliza
  }//if
}// for

return 0;
}//main
