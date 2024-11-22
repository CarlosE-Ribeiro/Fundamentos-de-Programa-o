// blibiotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Escreva um programa que receba uma sigla de um estado da região
Sul ou Sudeste e exiba o nome completo do estado correspondente*/

int main (){
  setlocale(LC_ALL, ""); // poder usar pontuações

char sigla[3];// vetor sigla
int i =0, j =0;//variaveis


printf("Digite a sigla de Estados do sudeste ou sul do páis:\n");//pedindo ro usuario entrar com uma sigla
fgets(sigla, 3, stdin);//armazenando a sigla
sigla[strcspn(sigla,"\n")]='\0';// trocando \n por \0

    if(strcasecmp(sigla, "PR") == 0){ // condição saber se ele digitou pr
    printf("A sigla digitrada é do Paraná\n");// exibir nome d estado da sigla acima
  } if(strcasecmp(sigla, "SP") == 0){// condição saber se ele digitou sp
    printf("A sigla digitrada é do São Paulo\n");// exibir nome d estado da sigla acima
  }if(strcasecmp(sigla, "SC") == 0){// condição saber se ele digitou sc
    printf("A sigla digitrada é do Santa Catarina\n");// exibir nome d estado da sigla acima
  }if(strcasecmp(sigla, "RS") == 0){// condição saber se ele digitou rs
    printf("A sigla digitrada é do Rio Grande do Sul\n");// exibir nome d estado da sigla acima
  }if(strcasecmp(sigla, "MG") == 0){// condição saber se ele digitou mg
    printf("A sigla digitrada é do Minas Gerais\n");// exibir nome d estado da sigla acima
  }if(strcasecmp(sigla, "ES") == 0){// condição saber se ele digitou es
    printf("A sigla digitrada é do Espírito Santo\n");// exibir nome d estado da sigla acima
  }if(strcasecmp(sigla, "RJ") == 0){// condição saber se ele digitou rj
    printf("A sigla digitrada é do Rio de Janeiro\n");// exibir nome d estado da sigla acima
  }
   return 0;
}//main
