//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*a) Receba números do teclado enquanto eles forem não negativos. Os dados recebidos devem ser salvos em um vetor de inteiros alocado dinamicamente.
O vetor deve ter tamanho inicial 10 e ir sendo ajustado de 10 em 10 conforme a necessidade. Ao receber um valor negativo, o vetor deve ser ajustado exatamente
ao tamanho necessário, sem desperdício de memória.
b) Faça uma função recursiva que calcule a soma do quadrado de todos os elementos pares do vetor do item A. Ao final, exiba a soma retornada pela função.
Obs.: Caso você não consiga fazer o item A, crie um vetor de inteiros qualquer e faça o item b.*/

//função para analisar os valores pares do vetor e somar eles
int quadrado_vetor(int *vetor, int numero, int soma){
    if (numero == 0){//caso base
      return soma;
    }else (vetor[numero] % 2 == 0)//chamada recursiva
      soma =  vetor[numero] * quadrado_vetor(numero - 1, vetor);
      return soma;
    //else
}//quadrado_vetor


//função main
int main(){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int *vetor;
int numero = 10;
int svetor=0;
int soma;
// alocando memoria para o vetor
vetor = (int*) malloc(numero * sizeof(int));
//laço de repetição para preencher o arquico
for (size_t i = 0; i < numero ; i++) {
  printf("Digite a %iº vetor:\n", i+1);
  scanf("%i",&vetor[i]);
  //se inserir o valor negativo, encerra o coleta de valores e reajusta o espaço de memória disponibilizado
    if (vetor[i] < 0){
      numero = i;
      vetor = realloc(vetor, (numero + 10) * sizeof(int));
      break;
      }//if
    //caso o usuario for entrar comm maais de 10 valores, ele abre mais 10 espaçõs na memória
    if((i + 1) == numero){
      vetor = realloc(vetor, (numero + 10) * sizeof(int));
      numero += 10;
    }//if
  }//for
//printando os valores digitados para preencher o vetor
for (size_t i = 0; i < numero; i++) {
  printf("\n%iº posição do vetor: %i\n",i+1, vetor[i]);
}//for

//igualando a função com uma variável para pegar o retorno do valor
svetor = quadrado_vetor(vetor, numero, soma);
//exibindo a soma dos valores pares que compõe o vetor
printf("\n A soma do vetor é: %i\n",svetor);

return 0;
}//main
