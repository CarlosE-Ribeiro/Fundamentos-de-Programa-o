#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main () {
  setlocale(LC_ALL, "");
  int esco;

while (  esco != 3) {

  printf("Escolha uma opção:\n");
  printf("-----MENU-----\n");// menu para o usuario ver suas opç~es de entrada de valor
  printf(" 1 - teste 01\n");
  printf(" 2 - teste 02\n");
  printf(" 3 - sair do programa\n");
  scanf("%i",&esco); /// armazena a escolha do usuário

  if (esco == 3) { // condicão para a escolha do usuario
  printf("finalizando programa...\n"); /// se escolher tres, exibe essa mensagem e fecha o programa
 }else {
  switch (esco) { // abrindo condiçaõ dependo da escolha do usuario
    case 1:
      printf("teste 01\n"); // se for 1, printa isso e mostra o menu
      break; // para o case 1
    case 2:
      printf("teste 02\n");// se for 2, printa isso e mostra o menu
      break; // para o case 2
    default: // caso não seja escolid nenhum case
      printf("error\n"); // printa essa frase error
  } // switch

} // else
} //while
  return 0;
} // main
