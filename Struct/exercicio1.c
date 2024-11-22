#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//criando struct
typedef struct{
  float x;
  float y;
} coordenadas;

int main () { // main
  setlocale(LC_ALL, "");
//criando variaveis
coordenadas pontos_1, pontos_2;
float distancia = 0;
//pedindo pontos x1 x2 y1 y2 para o usuario e armazenando
printf("Por favor, insira a coordenada para x1:\n");
scanf("%f", &pontos_1.x);
printf("Por favor, insira a coordenada para y1:\n");
scanf("%f", &pontos_1.y);
printf("Por favor, insira a coordenada para x2:\n");
scanf("%f", &pontos_2.x);
printf("Por favor, insira a coordenada para y2:\n");
scanf("%f", &pontos_2.y);
//calculando a distancia entre os pontos
distancia = sqrt(pow(pontos_2.x - pontos_1.x,2)) + sqrt(pow(pontos_2.y - pontos_1.y,2));
//exibindo a distancia entre os pontos 
printf("A distância entre os dois pontos é %.2f\n", distancia);

return 0;
}
