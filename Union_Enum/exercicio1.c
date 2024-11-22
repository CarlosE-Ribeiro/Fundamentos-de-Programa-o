//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//criando enumeração como se fosse 1 ano
enum ano {JANEIRO =1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO};

int main(){
// para poder usar pontuações
setlocale(LC_ALL, "");

//variáveis
enum ano;
int escolha;
//pedindo pro usuário entrar com um valor e armazenar
printf("Digite um número para saber o mês que ele equivale:\n");
scanf("%i",&escolha);
//criando os opções a ser exibida dependendo do valor de entrada do usuário
switch (escolha) {
  //caso seja valor igual a jeneiro, exibir o mes e a qunatidade de dias
  case JANEIRO:
  printf("Você digitou o valor que equivale a janeiro e o mês tem 31 dias\n");
  break;
  //caso seja valor igual a fevereiro, exibir o mes e a qunatidade de dias
  case FEVEREIRO:
  printf("Você digitou o valor que equivale a fevereiro e o mês tem 28 dias\n");
  break;
  //caso seja valor igual a março, exibir o mes e a qunatidade de dias
  case MARCO:
  printf("Você digitou o valor que equivale a março e o mês tem 31 dias\n");
  break;
  //caso seja valor igual a abril, exibir o mes e a qunatidade de dias
  case ABRIL:
  printf("Você digitou o valor que equivale a abril e o mês tem 30 dias\n");
  break;
  //caso seja valor igual a maio, exibir o mes e a qunatidade de dias
  case MAIO:
  printf("Você digitou o valor que equivale a maio e o mês tem 31 dias\n");
  break;
  //caso seja valor igual a junho, exibir o mes e a qunatidade de dias
  case JUNHO:
  printf("Você digitou o valor que equivale a junho e o mês tem 30 dias\n");
  break;
  //caso seja valor igual a julho, exibir o mes e a qunatidade de dias
  case JULHO:
  printf("Você digitou o valor que equivale a julho e o mês tem 31 dias\n");
  break;
  //caso seja valor igual a agosto, exibir o mes e a qunatidade de dias
  case AGOSTO:
  printf("Você digitou o valor que equivale a agosto e o mês tem 31 dias\n");
  break;
  //caso seja valor igual a setembro, exibir o mes e a qunatidade de dias
  case SETEMBRO:
  printf("Você digitou o valor que equivale a setembro e o mês tem 30 dias\n");
  break;
  //caso seja valor igual a outubro, exibir o mes e a qunatidade de dias
  case OUTUBRO:
  printf("Você digitou o valor que equivale a outubro e o mês tem 31 dias\n");
  break;
  //caso seja valor igual a novembro, exibir o mes e a qunatidade de dias
  case NOVEMBRO:
  printf("Você digitou o valor que equivale a novembro e o mês tem 30 dias\n");
  break;
  //caso seja valor igual a dezembro, exibir o mes e a qunatidade de dias
  case DEZEMBRO:
  printf("Você digitou o valor que equivale a dezembro e o mês tem 31 dias\n");
  break;
  //e caso não digite nenhum valor que condiz com um mes, exibir que não existe correlação com o valor digitado
  default:
  printf("Você digitou um valor que não condiz com um mês...\n");
}//switch

return 0;
}//main
