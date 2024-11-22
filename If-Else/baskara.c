#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

 float a,b,c,delta,x1,x2; //variaveis necessarias para fazer as equações

printf("por favor, digite o valor de a:\n");//pedido para o usuario entrar com o valor de a
scanf("%f",&a); // armazenamento do valor de a
printf("por favor, digite o valor de b:\n");//pedido para o usuario entrar com o valor de b
scanf("%f",&b);// armazenamento do valor de b
printf("por favor, digite o valor de c:\n"); //pedido para o usuario entrar com o valor de c
scanf("%f",&c);// armazenamento do valor de c

delta = b * b - 4 * a * c; // equacãopara encontrar delta
x1 = (-b + sqrt(delta)) / (2 * a); // equacãopara encontrar a primeira raiz
x2 = (-b - sqrt(delta)) / (2 * a);//euqcao para encontrar a primeira raiz

if (delta > 0) { //condicão aberta para delta ser maior que 0
   printf("os valores das raizes sao ((%.2f;%.2f))\n", x1,x2); // se for maior ele mostrara as raizes
     } else {
        printf("nao foi possivel completar a equacao, pois a delta nao pode ser negativo ou igual a zero. Tenten com outros valores!\n");
      } //caso não seja ele pedira para o usuario entrar com outros valores
  return 0;
}
