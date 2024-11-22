#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer

int main(){

char nomes [10][11];// variaveis

  for(int i = 0; i<10; i++){ //looping para rodar 10 vezes
      printf("Informe o %i nome:", i+1); // pedindo pro usuario entrar com um nome
      fgets(nomes[i], 11, stdin); // armaenando a entrada do usuário
      limpar_buffer(); // limpar o lixo
      nomes[i][strcspn(nomes[i], "\n")] = '\0'; // troca \n por \0
      }//for

   for(int i = 0; i < 10; i ++){ // lopping para apreenar o nome 10 vezes
      printf("%i- O nome digitado foi: %s\n", i+1, nomes[i]); // mostrando os nomes na tela
   }//for2
   printf("\n");// pula liinha
  return 0;
}//main
