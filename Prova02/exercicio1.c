//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun�� main
int main( int argc, char **argv){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de variaveis
int qpessoas[4][5], soma_qpessoas =0, qcaixas =0, soma_qpessoasL2 =0, qampolas =0;
int compcoluna[5], cmpopulacao =0, coluna =0 , ampolas =0;
//criando looping para ser a linha da matriz
//cria��o das 4 linhas
for(int i = 0; i < 4; i++){
  //cria��o das 5 colunas
  for(int j = 0; j < 5; j++){
//pedindo para entrar com a quantidade de pessoas a serem vacinadas
    printf("Digite a quantidade de pessoas:");
    scanf("%i", &qpessoas[i][j]);
  //somando o valor de cada coluna, em sua respectuva linha
//se passar quantidades pessoas negativas, pedir qunatidade novamente
    if(qpessoas < 0){
      printf("Digite a quantidade de pessoas:");
      scanf("%i", &qpessoas[i][j]);
    }//if
//caluculando a soma de cada coluna consorme sua linha
 compcoluna[j] += qpessoas[i][j];
//calculando a soma total de pessoas
    soma_qpessoas += qpessoas[i][j];
  } // for interno
}//for externo

//calculando a quantidade de caixas necessarias
//sabe-se que cada ampola � 5 doses e a caixa vem com dez, logo a caixa � quivalente a 50 doses
      qcaixas = soma_qpessoas/50;
//se der um n�mero quebrado arredondar a qunatidade de caixa, adicionar mais um
     if(soma_qpessoas % 50 > 0){
       qcaixas ++;
     }//if
     //calculando a qunatidade de ampolas minima para segunda linha
//acessando segunda linha
     for(int i = 0; i < 1; i++){
//acessando todas colunas da segunda linha
       for(int j = 0; j < 5; j++){
//somando tudo o que esta na segunda linha, ou seja, todas colunas
         soma_qpessoasL2 += qpessoas[1][j];
       }//for interno
     }//for externo
//calculando a qunatidade de ampolas parar o
  qampolas = soma_qpessoasL2/5;
  //se der um n�mero quebrado arredondar a qunatidade de caixa, adicionar mais um
       if(soma_qpessoasL2 % 5 > 0){
         qampolas ++;
       }//if
//exibindo quantidade de caixas para cidade
     printf("A quantidade de caixas para cidade � %i\n", qcaixas);
//qunatidade de ampolas para linha 2
     printf("A quantidade de ampolas para linha 2 � %i\n", qampolas);

//compara��o para saber qual coluna detem a menor quantidade de pessoas
     if(compcoluna[0] < compcoluna[1] && compcoluna[0] < compcoluna[2] && compcoluna[0] < compcoluna[3] && compcoluna[0] < compcoluna[4]){
               cmpopulacao = compcoluna[0];
               coluna = 1;
         }//if
//compara��o para saber qual coluna detem a menor quantidade de pessoas
         if(compcoluna[1] < compcoluna[0] && compcoluna[1] < compcoluna[2] && compcoluna[1] < compcoluna[3] && compcoluna[1] < compcoluna[4]){
               cmpopulacao = compcoluna[1];
               coluna = 2;
         }//if
//compara��o para saber qual coluna detem a menor quantidade de pessoas
         if(compcoluna[2] < compcoluna[0] && compcoluna[2] < compcoluna[1] && compcoluna[2] < compcoluna[3] && compcoluna[2] < compcoluna[4]){
               cmpopulacao = compcoluna[2];
               coluna = 3;
         } //if
//compara��o para saber qual coluna detem a menor quantidade de pessoas
         if(compcoluna[3] < compcoluna[0] && compcoluna[3] < compcoluna[1] && compcoluna[3] < compcoluna[2] && compcoluna[3] < compcoluna[4]){
               cmpopulacao = compcoluna[3];
               coluna = 4;
         }//if
//compara��o para saber qual coluna detem a menor quantidade de pessoas
         if(compcoluna[4] <compcoluna[0] && compcoluna[4] < compcoluna[1] && compcoluna[4] < compcoluna[2] && compcoluna[4] < compcoluna[3]){
                 cmpopulacao = compcoluna[0];
                 coluna = 5;
           }//if
           //printando a coluna
         printf("A coluna com menor quantidade de pessoas � a coluna %i\n", coluna);

         //calculando e exibindo a qunatidade de ampolas para sani
         ampolas = cmpopulacao / 5;
         if ((cmpopulacao % 5) > 0) {
           ampolas += 1;
         }//if
         printf("A quantidade de ampolas necess�rias para vacinar essa coluna � %i \n", ampolas);

    return 0;
  }//main
