//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

//função que compara letra por letra das strings para saber se a a primira contém a segunda
bool frases(char *string1, char *string2){
  //igualando sistema buleano
  bool bools;
//looping para rodar todas a letras da string 1
  for(int i = 0; i < strlen(string1) ; i++){
    bools = true;
    //looping para rodar todas a letras da string 2
    for(int j = 0; j < strlen(string2) ; j++){
      //comparando as strings
      if(*(string1 + i + j) != *(string2 + j)){
        bools= false;
        break;
      }//if
    }//for interno
    if(bools){
    return true;
   }//if
  }//for extero
 return false;
}//frases

int main(){
  //para poder utilizar pontuações
  setlocale(LC_ALL, "");
//criando variaveis para as strings
  char string1[31];
  char string2[31];
//pedindo para o usuário entrar a primeira frase e armazenando
printf("Digite a primeira frase:\n");
fgets(string1, 31, stdin);
string1[strcspn(string1, "\n")] = '\0'; // troca \n por \0
setbuf(stdin, NULL);
//pedindo para o usuário entrar a segunda frase e armazenando
printf("Digite a segunda frase:\n");
fgets(string2, 31, stdin);
string2[strcspn(string2, "\n")] = '\0'; // troca \n por \0
setbuf(stdin, NULL);
//passando as comparação para saber se são iguais ou diferentes
if(frases (string1, string2)){
  printf("Está contida!\n");
} else {
printf("Não está contida!\n");
}
return 0;
}//main
