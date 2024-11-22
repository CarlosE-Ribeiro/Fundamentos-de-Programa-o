//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função main
int main(){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int number;
int *vetor;
//pedindo e armazenando o numero do tamnho do vetor
printf("Digite um valor para ser o tamanho do vetor:\n");
scanf("%i", &number);
//criando vetor de acordo com o valor digitado pelo usuário
vetor = (int*) malloc(number * sizeof(int));
//looping para pedir que o usuario entre com os valores do vetor
for (size_t i = 0; i < number; i++) {
  printf("Digite o primeiro valor do vetor\n");
  scanf("%i",&vetor [i]);
}//for
//printando o vetor de acordo com o tamnho e valores digitador pelo usuario
for (size_t i = 0; i < number; i++) {
  printf("%i\n", vetor[i]);
}//for
free(vetor);
return 0;
}//main
