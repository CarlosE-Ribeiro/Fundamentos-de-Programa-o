#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Leia um vetor A com 10 elementos inteiros correspondentes
as idades de um grupo de pessoas. Escreva um programa que
conte e exiba a quantidade de pessoas que possuem idade
superior a 35 anos.*/

int main () {
  setlocale(LC_ALL, ""); // para poder usar pontuações

int idades[10], c=0;// variaveis

for(int i = 0; i < 10; i++){///laços de repetição de 10x
  printf("Por favor, digite sua idade:\n");// pedindo para entar com um valor
  scanf("%i",&idades[i]);// armazenando valor
  if(idades[i] > 35){ //condição se a idade digitada for maior que 35
    c++;// incrimentar no contador
  }//if
}//for

printf("O número de pessoas com mais de 35 anos:a %i\n",c);// exibir quantos valores foram maiores que 35

return 0;
}//main
