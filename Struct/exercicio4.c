#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct{
  char nome[15];
  float potencia;
  float horas;
  int dias;
} consumo;


int main (){// main
  //para utilizar pontua��es
  setlocale(LC_ALL, "");
//variaveis
consumo consumo[5];
long int i, dias_ele[5];
float cons_total =0, cons_cada1[5];
//lopping para perguntar 5 vezes
for(i =0; i < 5; i++){
//pedindo para ele inserir o nome do eletrodom�stico e armazenando
printf("Digite o nome do eletrodom�stico:\n");
fgets(consumo[i].nome, 15, stdin);
consumo[i].nome[strcspn(consumo[i].nome, "\n")] = '\0'; // troca \n por \0
fflush(stdin); // limpar o lixo
//pedindo para inserir a potencia
printf("Digite a quantidade de pot�ncia em kW\n");
scanf("%f",&consumo[i].potencia);
fflush(stdin); // limpar o lixo
//pedindo o tempo ativo por horas e armazenando
printf("Digite a quantidade de horas em que ele fica ligado:\n");
scanf("%f",&consumo[i].horas);
fflush(stdin);
//pedindo os dias em que ele fica ligado
 printf("Quantos dias esse aparelho fica ligado?\n");
 scanf("%i",&consumo[i].dias);
 fflush(stdin);
 printf("\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n");
// calculando o consumo de cade eletrodom�stico
cons_cada1[i] =(consumo[i].potencia * consumo[i].horas) * consumo[i].dias;
// calculando consumo total
cons_total += cons_cada1[i];
}//for
// calculando a rela��o de cada eletrodom�stico com o consumo total
for(i =0; i < 5; i ++){
//consumo de cada eletrodom�stico em rela�ao ao total
cons_cada1[i] = (cons_cada1[i] / cons_total) * 100;
}//for
//mostrando consumo total da casa
printf("O consumo da sua casa � de %.2f\n",cons_total);
//mostrar o nome de cada eletrodom�stico,consumo em porcentagem e no total de dias que o usu�rio entrou
for(i = 0; i < 5; i++){
  printf("%s consume %.2f %% do total,",consumo[i].nome, cons_cada1[i]);
}//for

  return 0;
} //main
