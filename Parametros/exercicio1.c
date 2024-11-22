//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o que faz a transforma��o de segundos para horas e miinutos
void converteHora(int total_segundos, int* hora, int* min, int* seg){
//declarando a variavel da fun��o
int resto;
*hora = total_segundos / 3600;
resto = total_segundos % 3600;
*min = resto / 60;
*seg = resto % 60;
}//coverteHora

//fun�� main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int total_segundos, hora =0, min =0, seg =0;
//pedindo pro us�ario entrar com quantidade de segundo e armazenando a entrada
printf("Insira a quantidade de segundos para ser transformado em horas e minutos\n");
scanf("%i",&total_segundos);
//chamando a fun��o e seus par�metros
converteHora(total_segundos, &hora, &min, &seg);
//exibindo o total de horas, minutos e segundos
printf(" %i segundo � %i h %i min %i seg \n", total_segundos, hora, min, seg);
    return 0;
}//main
