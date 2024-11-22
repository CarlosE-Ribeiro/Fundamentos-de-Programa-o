#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:
Horário: composto de hora, minutos e segundos.
Data: composto de dia, mês e ano.
Compromisso: local, horário e texto que descreve o
compromisso.*/

// struct horarios, onde é composta por hora, minuto e sgundo
typedef struct{
  int hora;
  int minutos;
  int segundos;
} horarios;

// struct datas, na qual é cmposta por dia, mes e ano
typedef struct{
  int dia;
  int mes;
  int ano;
} datas;

// struct compromissos, composta pelo local, struct horarios e descrição dos comprimissos
typedef struct{
  char local[50];
  horarios;
  char descricao[30];
} compromissos;

int main () { // main
  return 0;
}// main
