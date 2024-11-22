#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int salario = 1200; //salario do trabalhador
float comiuni;
float vendas;
float salbruto;


printf("Coloque o total de vendas do mes R$:\n");
scanf("%f",&vendas );

comiuni = vendas * 0.1; // formula para calular a base da comissao.

printf("seu valor em comissao e: R$ %.2f\n",comiuni );

salbruto = salario + comiuni;

printf("seu salario bruto e: R$ %.2f\n",salbruto );


  return 0;
}
