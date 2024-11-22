//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça uma função recursiva que permita somar os elementos de um vetor de inteiros.*/

int soma_vetor(int tvetor, int* vetor){
     if (tvetor == 0){//caso base
       return vetor[0];
     }else if (vetor[tvetor] % 2 == 0) {//chamada recursiva
       return  vetor[tvetor] + soma_vetor(tvetor - 1, vetor);
     }//else
   }//soma_vetores
//função main
int main(){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int tvetor;
int sfinal;

printf("Digite o tamanho do seu vetor:\n");
scanf("%i", &tvetor);

int vetor[tvetor];

for (size_t i = 0; i < tvetor; i++) {
    printf("Digite o %i posição do vetor:\n",i+1);
    scanf("%i",&vetor[i]);
}//for
tvetor = tvetor - 1;
sfinal = soma_vetor(tvetor, vetor);

printf("\n A soma do vetor é: %i\n",sfinal);
return 0;
}//main
