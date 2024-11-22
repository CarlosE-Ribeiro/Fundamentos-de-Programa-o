//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// struct horarios, onde � composta por hora, minuto e sgundo
typedef struct{
  int hora;
  int minutos;
  int segundos;
} horario;

void converteHorario(int total_segundos, horario *hor){
  //declarando a variavel da fun��o
  int resto;
  hor->hora = total_segundos / 3600;
  resto = total_segundos % 3600;
  hor->minutos = resto / 60;
  hor->segundos = resto % 60;
  }//coverteHora

//fun�� main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de variaveis
horario hor;
int total_segundos;
//pedindo pro usuario entrar com
printf("Por favor digite o total de segundos\n");
scanf("%i",&total_segundos);
//chamando a fun��o com o seus par�metros
converteHorario(total_segundos, &hor);
//exibindo o total de horas, minutos e segundos
printf("%i segundo � %ih %imin %iseg \n", total_segundos, hor.hora, hor.minutos, hor.segundos);
    return 0;
}//main
