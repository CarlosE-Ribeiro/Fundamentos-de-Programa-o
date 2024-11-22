#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()  {

float pesoideal = 0;
float altura;


printf("Digite a sua altura utilizando ponto: "); // pede a ditaçaõ de dados
scanf("%f",&altura); //armazena os dados

pesoideal =  72.7 * altura - 58; // calcula o peso ideal

printf ("o peso ideal para voce e: %.2f\n",pesoideal); // saida de dados

return 0;


}
