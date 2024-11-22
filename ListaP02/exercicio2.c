//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



//funçã main
int main( int argc, char **argv){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int z, a =0, b =0, c =0, d =0, cont =0, media =0, soma =0;

printf("Digite um valor inteiro positivo\n");
scanf("%i", &z);
a = z;
b = z;
c = z;
d = z;

for(int i = 0; i < z; i++){
    do {
      z--;
      printf("%i\n", z);
    } while (z > 1);
}//for
printf("\n------------\n\n");
for(a; a > 0; a--){
  if(a % 4 == 0){
    printf("%i\n", a);
  }//if
}//segundo for
printf("\n------------\n\n");
for(b; b > 0; b--){
  if(b % 3 == 0){
    cont++;
  }//if
}//terceiro for
printf("%i números são multiplos de 3 no intervalo de %i a 1\n", cont, c);
printf("\n------------\n\n");
cont = 0;
for(d; d > 0; d--){
  if(d % 5 == 0){
    soma += d;
    cont ++;
  }//if
}//quarto for
media = soma / cont;
printf("A média dos multiplos de 5 é %i\n", media);
  return 0;
}//main
