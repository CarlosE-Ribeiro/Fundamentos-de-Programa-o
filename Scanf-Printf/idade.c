#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

int atual, nascimento; // atual é o ano que estamas e nascimento a data que o usuario nasceu

printf("Digite o ano de seu nascimento: \n"); //entrada de dados com o ano que nasceu
scanf("%i",&nascimento); //armazenamento de dados

atual = 2021 - nascimento; // aqui é feita uma subtracao para descobrir a idade do usuario

printf("Sua idade e: %i\n", atual);



  return 0;
}
