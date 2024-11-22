//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//funcção para saber qual o maior valor digitado pelo usuário
float pesoideal ( char escolha[], float pideal, float altura) {
//switch para saber a conta do peso de acordo com o sexo
if(strcasecmp(escolha, "M") == 0){
pideal = (72.7 * altura) - 58;
} if(strcasecmp(escolha, "f") == 0){
pideal = (62.1 * altura) - 44.7;
}//segundo if
     return pideal;
}//pesoideal

// função main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "portuguese");
//declarando variaveis
char escolha[2];
float pideal =0, altura =0, resultado =0;
//condição para saber se o usuario está entrando com a quantidade de dados permitido
if (argc == 3){
//se sim, ordem em que será entrada de valor na main
strcpy(escolha, argv[1]);
altura = atof(argv[2]);
resultado = pesoideal (escolha, pideal, altura);
}else{
//se não, exibir erro por excesso ou falta de dados
  printf("Digite só inicial do sexo e a altura, por exemplo: f 1.72\n");
}//else
//printar valor do peso ideal de acordo com o sexo e altura
printf("O peso ideal para %.2fM é %.2f Kg\n", altura, resultado);

return 0;
}//main
