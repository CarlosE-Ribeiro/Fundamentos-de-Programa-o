// blibiotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Faça um programa que receba um nome e um sobrenome. Ele deve
construir uma nova string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José
*/

void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer

int main (){
  setlocale(LC_ALL, ""); // poder usar pontuações

char sobrenomes [20], nomes [20];// vetor sobre nome e sobrenome
int i; // variavel

for(i = 1; i > 0; i ++){ // loop para rodar infinito
  printf("Digite um nome:\n"); // pedindo um nome
  scanf("%20[^\n]s",nomes);// armazenando um nome
  limpar_buffer();// limpando lixo
  printf("Digite um sobrenome:\n");// pedindo para digitar sobrnome
  scanf("%20[^\n]s",sobrenomes);// armazenando sobrenome
  limpar_buffer();//limpando lixo

  strcat (sobrenomes, ", "); // fnção para colocar virgula deis do sobrenome
  strcat(sobrenomes,nomes);// inverter posição de nome com sobrenome
  printf("Em formato americano o nome fica: %s\n", sobrenomes);// mostrar nome no estilo americano
} // for

return 0;
}//main
