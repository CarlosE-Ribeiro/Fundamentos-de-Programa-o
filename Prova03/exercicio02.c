//declaração de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Você é o programador responsável por gerar a listagem que pessoas que serão vacinadas em sua cidade em cada etapa da vacinação.
Para isso, o Prefeito Sr. Vader lhe passou um arquivo texto contendo todos os moradores da cidade. Cada linha contém os dados de um morador,
com CPF, nome e idade. Você deve:

a) Ler os dados do arquivo fornecido (moradores.txt) e salvar em um vetor de moradores (cada morador tem um cpf (texto), nome(texto) e idade(int)).
Você não sabe quantos moradores terão no arquivo, logo, o vetor deve ser alocado dinamicamente. Ao finalizar, exiba na tela quantos moradores foram lidos.

b) Exiba na tela uma lista alinhada da quantidade de pessoas por faixa de idade em intervalos de 5 anos (idades de 89 a 0).
Ex:
De 85 a 89 anos -  3 moradores
De 80 a 84 anos - 15 moradores
De 75 a 79 anos - 30 moradores
De 70 a 74 anos - 45 moradores

c) Em seguida solicite uma faixa de idade (mínima e máxima) para a qual será gerada uma listagem.
Crie um arquivo de saída no modo texto contendo todos os dados dos moradores daquela faixa de idade. O nome do arquivo de saída deverá ser:
"listagem_min-max.txt". E exiba na tela a quantidade de moradores salvos nessa listagem.

Exemplo de saída:
Digite a idade mínima: 52
Digite a idade mínima: 56
Foram encontrados 32 moradores
Arquivo gerado: listagem_52_56.txt*/

//criando estrutura com os dados dos moradores
typedef struct{
  char cpf[12];
  char telefone[12];
  int idade;
}dados_moradores;

//função main
int main(){
    //para poder utilizar pontuações
    setlocale(LC_ALL, "");
//declaração de variáveis
int cont_linha = 0;
char analisa_caracter;
char c;
char especifico[20];

//declarando e abrindo o arquivo para leitura
FILE *arquivo = fopen("moradores.txt", "r");
//analisando qunatas linhas tem no arquivo, já que cada linha é equivalente a um morador
while((analisa_caracter = fgetc(arquivo))!=EOF){
  if(analisa_caracter == '\n'){
    cont_linha++;
  }//if
}//while
//declarando o numero de dados que podem ser escritos/lidos de acordo com o tamanh9o do arquivo
dados_moradores *dados[cont_linha];
//abrindo o arquivo e alocando ele de acordo com o tamanho do arquivo
dados = (int*) malloc(cont_linha * sizeof(dados));
//exibindo a quantidade de pessoas
printf("A quantidade de moradores é igual a: %i\n", cont_linha);
//lendo o arquivo e a struct que compõe cada uma e exibindo
for(size_t i = 0; i < 500; i++){
  fscanf(dados,"%s %2c", especifico, dados[i].cpf);
  fscanf(dados,"%s %2c", especifico, dados[i].telefone);
  fscanf(dados,"%s %2i", especifico, dados[i].idade);
}//for

return 0;
}//main
