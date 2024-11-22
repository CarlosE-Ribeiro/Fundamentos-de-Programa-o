// blibiotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Desenvolva um programa que armazene o nome e o
telefone de 5 pessoas. Ao digitar a posição desejada, o
programa deve exibir o nome e telefone daquela posição. O
programa finaliza ao receber a entrada -1*/

void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer

int main (){

  setlocale(LC_ALL, "");

char nomes [5][20]; // vetor nomes
long long int telefone [20]; // vetor Telefone
int ordem = 0, i; // variaveis

for(i = 0; i < 5; i ++){ // loop para rodar 5 vezes
   printf("Digite o nome:\n"); // pedindo pro usuario entrar com um Telefone
   fgets(nomes[i], 11, stdin);// armazenando o nome digitado pelo usuario
   nomes[i][strcspn(nomes[i], "\n")] = '\0'; // trocando o \n pelo \0
   limpar_buffer(); // limpando lixo
   printf("Digite seu telefone:\n"); // pedindo pro usuario entrar com um numero telofone
   scanf("%lli", &telefone[i]); // armazenanando o nmero de Telefone
   printf("\n"); // pula linha
   limpar_buffer(); // limpando lixo

   if(telefone[i] < 0){ // condicção se for menor que zero
     return 0; // fim do programa
   }// if
 }// for
printf("Escolha um nome e telofone para ser exibido novamente:\n"); // pedindo um nome e telefomne para ser exibido novamete
scanf("%i", &ordem); // armazenando o pedindo

if(ordem < 6 && ordem > 0){ // condição para estar entre os cincos digitados ateriormente
  ordem --; // decrementar o numero que ele pediu, pois veor comeca com 0
  printf("Nome: %s \n",nomes[ordem]); // exibir nome
  printf("Telefone: %lli \n",telefone[ordem]); // exibir Telefone
} else // se não
  printf("Essa linha não existe\n"); // ecibe que não existe 

return 0;
} // main
