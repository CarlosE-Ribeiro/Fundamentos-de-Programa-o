//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//criando enumera��o como se fosse 1 ano
enum ano {JANEIRO =1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO};

int main(){
// para poder usar pontua��es
setlocale(LC_ALL, "");

//vari�veis
enum ano;
int escolha;
//pedindo pro usu�rio entrar com um valor e armazenar
printf("Digite um n�mero para saber o m�s que ele equivale:\n");
scanf("%i",&escolha);
//criando os op��es a ser exibida dependendo do valor de entrada do usu�rio
switch (escolha) {
  //caso seja valor igual a jeneiro, exibir o mes e a qunatidade de dias
  case JANEIRO:
  printf("Voc� digitou o valor que equivale a janeiro e o m�s tem 31 dias\n");
  break;
  //caso seja valor igual a fevereiro, exibir o mes e a qunatidade de dias
  case FEVEREIRO:
  printf("Voc� digitou o valor que equivale a fevereiro e o m�s tem 28 dias\n");
  break;
  //caso seja valor igual a mar�o, exibir o mes e a qunatidade de dias
  case MARCO:
  printf("Voc� digitou o valor que equivale a mar�o e o m�s tem 31 dias\n");
  break;
  //caso seja valor igual a abril, exibir o mes e a qunatidade de dias
  case ABRIL:
  printf("Voc� digitou o valor que equivale a abril e o m�s tem 30 dias\n");
  break;
  //caso seja valor igual a maio, exibir o mes e a qunatidade de dias
  case MAIO:
  printf("Voc� digitou o valor que equivale a maio e o m�s tem 31 dias\n");
  break;
  //caso seja valor igual a junho, exibir o mes e a qunatidade de dias
  case JUNHO:
  printf("Voc� digitou o valor que equivale a junho e o m�s tem 30 dias\n");
  break;
  //caso seja valor igual a julho, exibir o mes e a qunatidade de dias
  case JULHO:
  printf("Voc� digitou o valor que equivale a julho e o m�s tem 31 dias\n");
  break;
  //caso seja valor igual a agosto, exibir o mes e a qunatidade de dias
  case AGOSTO:
  printf("Voc� digitou o valor que equivale a agosto e o m�s tem 31 dias\n");
  break;
  //caso seja valor igual a setembro, exibir o mes e a qunatidade de dias
  case SETEMBRO:
  printf("Voc� digitou o valor que equivale a setembro e o m�s tem 30 dias\n");
  break;
  //caso seja valor igual a outubro, exibir o mes e a qunatidade de dias
  case OUTUBRO:
  printf("Voc� digitou o valor que equivale a outubro e o m�s tem 31 dias\n");
  break;
  //caso seja valor igual a novembro, exibir o mes e a qunatidade de dias
  case NOVEMBRO:
  printf("Voc� digitou o valor que equivale a novembro e o m�s tem 30 dias\n");
  break;
  //caso seja valor igual a dezembro, exibir o mes e a qunatidade de dias
  case DEZEMBRO:
  printf("Voc� digitou o valor que equivale a dezembro e o m�s tem 31 dias\n");
  break;
  //e caso n�o digite nenhum valor que condiz com um mes, exibir que n�o existe correla��o com o valor digitado
  default:
  printf("Voc� digitou um valor que n�o condiz com um m�s...\n");
}//switch

return 0;
}//main
