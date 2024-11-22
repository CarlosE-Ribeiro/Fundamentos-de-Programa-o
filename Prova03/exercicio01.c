//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*a) Receba n�meros do teclado enquanto eles forem n�o negativos. Os dados recebidos devem ser salvos em um vetor de inteiros alocado dinamicamente.
O vetor deve ter tamanho inicial 10 e ir sendo ajustado de 10 em 10 conforme a necessidade. Ao receber um valor negativo, o vetor deve ser ajustado exatamente
ao tamanho necess�rio, sem desperd�cio de mem�ria.
b) Fa�a uma fun��o recursiva que calcule a soma do quadrado de todos os elementos pares do vetor do item A. Ao final, exiba a soma retornada pela fun��o.
Obs.: Caso voc� n�o consiga fazer o item A, crie um vetor de inteiros qualquer e fa�a o item b.*/

//fun��o para analisar os valores pares do vetor e somar eles
int quadrado_vetor(int *vetor, int numero, int soma){
    if (numero == 0){//caso base
      return soma;
    }else (vetor[numero] % 2 == 0)//chamada recursiva
      soma =  vetor[numero] * quadrado_vetor(numero - 1, vetor);
      return soma;
    //else
}//quadrado_vetor


//fun��o main
int main(){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int *vetor;
int numero = 10;
int svetor=0;
int soma;
// alocando memoria para o vetor
vetor = (int*) malloc(numero * sizeof(int));
//la�o de repeti��o para preencher o arquico
for (size_t i = 0; i < numero ; i++) {
  printf("Digite a %i� vetor:\n", i+1);
  scanf("%i",&vetor[i]);
  //se inserir o valor negativo, encerra o coleta de valores e reajusta o espa�o de mem�ria disponibilizado
    if (vetor[i] < 0){
      numero = i;
      vetor = realloc(vetor, (numero + 10) * sizeof(int));
      break;
      }//if
    //caso o usuario for entrar comm maais de 10 valores, ele abre mais 10 espa��s na mem�ria
    if((i + 1) == numero){
      vetor = realloc(vetor, (numero + 10) * sizeof(int));
      numero += 10;
    }//if
  }//for
//printando os valores digitados para preencher o vetor
for (size_t i = 0; i < numero; i++) {
  printf("\n%i� posi��o do vetor: %i\n",i+1, vetor[i]);
}//for

//igualando a fun��o com uma vari�vel para pegar o retorno do valor
svetor = quadrado_vetor(vetor, numero, soma);
//exibindo a soma dos valores pares que comp�e o vetor
printf("\n A soma do vetor �: %i\n",svetor);

return 0;
}//main
