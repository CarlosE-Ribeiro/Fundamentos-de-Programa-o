//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/*Crie uma matriz identidade com dimensões 5 x 5*/
int main () { // main
  setlocale(LC_ALL, ""); //poder usar pontuações

int matriz[5][5];

for(int l = 0; l < 5; l++){ // lopping da linha até 5
for(int c = 0; c < 5; c++){ // looping coluna até 5
  if(l == c){ // condição de posição for igual
  matriz[l][c] = 1; // tomar valor 1
}else{ // se não
  matriz[l][c] = 0; //tomar valor 0
}//else
  }//for interno
}//for externo
for (int l = 0; l < 5; l++){ // loop linhas
  printf("\n"); // pular de linha quando coluna for toda preenchida
for(int c = 0; c < 5; c++){ // loop colunas
  printf("%3i", matriz[l][c]); // printar todos valores das colunas
} // for interno
} // for externo
printf("\n");
return 0;
}//main
