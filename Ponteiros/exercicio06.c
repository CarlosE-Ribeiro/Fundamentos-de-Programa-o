//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  //declara��o de vari�veis
  int a, *b, **c, ***d;
  //pedindo para usu�rio entrar com o valor
  printf("Digite um valor para A: ");
  scanf("%i", &a);
    //b pegando o endere�o de a e printando o multiplo do mesmo
    b = &a;
    printf("Valor de B: %i\n",(*b * 2));
    //c pegando o endere�o de a e printando o triplo do mesmo
    c = &b;
    printf("Valor de C: %i\n",(**c * 3));
    //d pegando o endere�o de a e printando o quadriplo do mesmo
    d = &c;
    printf("Valor de D: %i\n",(***d * 4));
return 0;
}//main
