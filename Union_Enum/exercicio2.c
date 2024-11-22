//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

//declaração da enumeração para o menu de nacionalidade
typedef enum {BRASILEIRO = 1, ESTRANGEIRO} TipoDocumento;
// declaração de sctruct para saber com que dados o usuário vai entrar
typedef struct{
  char nome[50];
  int idade;
  float peso;
  int dia;
  int mes;
  int ano;
  TipoDocumento nacionalidade;
  union{
    char cpf[12];
    char passaporte[13];
  }documento;
}cadastro;

int main(){//main
    //para poder utilizar pontuações
    setlocale(LC_ALL, "portuguese");
    //criando vetor da struct
    cadastro pessoa[5];
    //variavel para lopping
    int i = 0;
// looping para rodar 5x o que está no for
for(i = 0; i < 2; i++){
  //pedindo para o usuário entrar com o nome e armaenando
    printf("Insira o nome da %iº pessoa: ", i+1);
    fgets(pessoa[i].nome, 50, stdin);
    pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';
    fflush(stdin); // limpando a ultima tecla digitada
  //pedindo pro usuário entrar com uma idade e armazenando
    printf("Insira a idade da %iº pessoa: ", i+1);
    scanf("%d", &pessoa[i].idade);
    fflush(stdin);// limpando a ultima tecla digitada
  //pedindo pro usuário entrar com o peso e armazenando
    printf("Insira o peso da %iº pessoa: ", i+1);
    scanf("%f", &pessoa[i].peso);
    fflush(stdin);// limpando a ultima tecla digitada
  //pedindo pro usuário entrar com a data de nascimento e armazenando
    printf("Insira a data de nascimento da %iº pessoa (Ex: dd/mm/aaaa): ", i+1);
    scanf("%d/%d/%d", &pessoa[i].dia, &pessoa[i].mes, &pessoa[i].ano);
    fflush(stdin);// limpando a ultima tecla digitada
    printf("\n");
  //exibição de menu para o usuário selecionar se é brasileiro ou não
    printf("**** Menu de opção de nacionalidade ****\n");
    printf("**    Indique sua nacionalidade:      **\n");
    printf("***         1 - BRASILEIRO           ***\n");
    printf("*****       2 - ESTRANGEIR         *****\n");
    printf("****************************************\n");
    printf("Insira aqui: ");
    scanf("%i", &pessoa[i].nacionalidade);
    fflush(stdin);// limpando a ultima tecla digitada
  //opções para exibir caso seja brasileiro ou estrangeiro
    switch (pessoa[i].nacionalidade) {
      //cao seja brasileiro, pedir cpf  e armazenar
      case BRASILEIRO:
        printf("Insira o CPF: ");
        fgets(pessoa[i].documento.cpf, 12, stdin);
        pessoa[i].documento.cpf[strcspn(pessoa[i].documento.cpf, "\n")] = '\0';
        fflush(stdin);// limpando a ultima tecla digitada
         break;
      //cao seja brasileiro, pedir passaporte e armazenar
      case ESTRANGEIRO:
        printf("Insira o Passaporte: ");
        fgets(pessoa[i].documento.passaporte, 13, stdin);
        pessoa[i].documento.passaporte[strcspn(pessoa[i].documento.passaporte, "\n")] = '\0';
        fflush(stdin);// limpando a ultima tecla digitada
          break;
      default:
      //caso usuário não exiba uma opção válida, exibir isso na tela
        printf("Você digitou uma opção inválida!\n");
          break;
    }//switch
      printf("\n");
  }//for
    printf("\n");
    //limpar tela
    system("cls");
  //looping de exebição
  for(i = 0; i < 2; i++){
  //exibir tudo que compõe a struct
    printf("\nA(o) %s tem %i anos, pesa %.2fKg, \n", pessoa[i].nome, pessoa[i].idade, pessoa[i].peso);
    printf("nasceu em %d/%d/%d, é ", pessoa[i].dia, pessoa[i].mes, pessoa[i].ano);
    //consição dependendo da escola do menu brasileiro ou estrangeiro
      if(pessoa[i].nacionalidade == 1){
        //se for brasileiro exibir que é brasiliro e cpf
        printf("Brasileiro \ne seu CPF é %s.\n", pessoa[i].documento.cpf);
        Sleep(350); // delay para exibir
      }else{
        //se não for brasileiro exibir que é estrangeiro e o passaporte
        printf("Estrangeiro \ne seu passaporte é %s.\n", pessoa[i].documento.passaporte);
        Sleep(350);// delay para exibir
        puts("\a");// emitir beep
      }//else
    }//for
    printf("\n\n");
return 0;
}//main
