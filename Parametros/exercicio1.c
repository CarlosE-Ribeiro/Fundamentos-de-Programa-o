//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função que faz a transformação de segundos para horas e miinutos
void converteHora(int total_segundos, int* hora, int* min, int* seg){
//declarando a variavel da função
int resto;
*hora = total_segundos / 3600;
resto = total_segundos % 3600;
*min = resto / 60;
*seg = resto % 60;
}//coverteHora

//funçã main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int total_segundos, hora =0, min =0, seg =0;
//pedindo pro usúario entrar com quantidade de segundo e armazenando a entrada
printf("Insira a quantidade de segundos para ser transformado em horas e minutos\n");
scanf("%i",&total_segundos);
//chamando a função e seus parâmetros
converteHora(total_segundos, &hora, &min, &seg);
//exibindo o total de horas, minutos e segundos
printf(" %i segundo é %i h %i min %i seg \n", total_segundos, hora, min, seg);
    return 0;
}//main
