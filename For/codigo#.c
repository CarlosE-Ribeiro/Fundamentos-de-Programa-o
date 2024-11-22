//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () { // main
  setlocale(LC_ALL, "");
int tamanho; // varivel para saber o tamanho do "quadrado"
    printf("Digite o tamnho:\n"); // pedir para ele inserir o tamanho que deseja
    scanf("%i",&tamanho); // armazenar o tamanho
  for(int coluna = 1; coluna <= tamanho; coluna ++) { // loopiing para coluna
    printf("\n"); // pular de coluna
        for(int linha = 1; linha <= tamanho; linha ++){ //looping para linha
          printf(" #"); // preencher linha
    }//for interno
  }// for externo
printf("\n"); // pular linha
      return 0;
}//main
