#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*Escreva um trecho de c�digo para fazer a cria��o dos
novos tipos de dados conforme solicitado abaixo:
Hor�rio: composto de hora, minutos e segundos.
Data: composto de dia, m�s e ano.
Compromisso: local, hor�rio e texto que descreve o
compromisso.*/

// struct horarios, onde � composta por hora, minuto e sgundo
typedef struct{
  int hora;
  int minutos;
  int segundos;
} horarios;

// struct datas, na qual � cmposta por dia, mes e ano
typedef struct{
  int dia;
  int mes;
  int ano;
} datas;

// struct compromissos, composta pelo local, struct horarios e descri��o dos comprimissos
typedef struct{
  char local[50];
  horarios;
  char descricao[30];
} compromissos;

int main () { // main
  return 0;
}// main
