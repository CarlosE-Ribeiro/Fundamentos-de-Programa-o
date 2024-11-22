#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer
/*Faça um programa que armazene o nome e salário de 5
empregados. Em seguida calcule um aumento de 8% nos
salários e exiba a nova folha de pagamentos.*/
int main(){

  float salario[5], aumento[5]; // vetor de salario
  char nomes[5][11]; // vetr de nomes

for(int i = 0; i < 5; i++){ // loopin para repetir 5 vezes
    printf("Digite seu nome: "); // pedindo pro usuário entrar com nome
    fgets(nomes[i], 11, stdin);// armazenando um noe digitado pelo usuario
    nomes[i][strcspn(nomes[i], "\n")] = '\0'; // troca o \n por \0
    limpar_buffer(); // limpando lixo
    printf("Digite seu salario: "); // pedindo pro usuario entar com o salrio
    scanf("%f", &salario[i]); // armaenando salario digitado pelo usuario
    printf("\n");// pula linhas
    limpar_buffer(); // limpando lixo
    aumento[i] = salario[i] * 1.08; // equação para aumentar 8% no salrio
  }//for
    for (int i = 0; i < 5; i++) { // looping para mostrar 5 vezes
      printf("%4s agora recebe: R$%.2f\n", nomes[i], aumento[i]); // mostrar na tela nome e salrio com reajuste
    }//for
    printf("\n"); // pula linha
  return 0;
}//main
