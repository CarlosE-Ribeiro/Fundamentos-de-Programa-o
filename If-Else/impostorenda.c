#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

float salario, imposto;  // variaveis ncessarias para fazer o algoritmo rodar

printf("digite o valor do salrio\n"); // informando para o usuario digitar o valor do seu salario
scanf ("%f", &salario); // armazenamento do valor do salario

// todos valores fixos foi tirado da tabela fornecida pelo professor muriel godoi

if (salario > 0 &&  salario <= 1903.98) { //abrindo as condição para efutar o calulo do imposto de renda
  printf ("Nao tem valor para ser pego.\n"); //isento conforme a tabela
} else
    if (salario <= 2826.65) {
      imposto = (salario * 0.75) - 142.8; // equacão para calcular o imposto com base no salario.
      printf("seu imposto de renda e: R$%.2f\n", imposto);
  } else
      if (salario <= 3751.05){
        imposto = (salario * 0.15) - 354.8;// equacão para calcular o imposto com base no salario.
        printf("seu imposto de renda e: R$ %.2f\n", imposto);
      } else
          if (salario <= 4664.68) {
            imposto = (salario * 0.225) - 636.13;// equacão para calcular o imposto com base no salario.
            printf("seu imposto de renda e: R$ %.2f\n", imposto);
                } else {
                  imposto = (salario * 0.275) - 869.36;// equacão para calcular o imposto com base no salario.
                  printf("seu imposto de renda e: R$ %.2f\n", imposto);
                }

  return 0;
}
