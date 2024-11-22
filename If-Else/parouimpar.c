#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()  {

int dividendo;
int resto;

printf ("Digite um numero para saber se e par:\n"); //pedindo para o usuario digitar o numero
scanf ("%i", &dividendo);// armazenando o numero digitado pelo usuario

resto = dividendo % 2; // aqui esta sendo realizado a divisão por 2 e salvado o resto

  if (resto == 0) { //condicoes com o resto igual a 0
      printf("Seu numero %i e par\n",dividendo); //se for mostrara essa mensagem
      } else {
          printf ("Seu numero %i e impar\n", dividendo); // se nao for, mostrara essa
               }
  return 0;

}
