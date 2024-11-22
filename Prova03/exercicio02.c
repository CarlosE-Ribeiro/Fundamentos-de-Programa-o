//declara��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Voc� � o programador respons�vel por gerar a listagem que pessoas que ser�o vacinadas em sua cidade em cada etapa da vacina��o.
Para isso, o Prefeito Sr. Vader lhe passou um arquivo texto contendo todos os moradores da cidade. Cada linha cont�m os dados de um morador,
com CPF, nome e idade. Voc� deve:

a) Ler os dados do arquivo fornecido (moradores.txt) e salvar em um vetor de moradores (cada morador tem um cpf (texto), nome(texto) e idade(int)).
Voc� n�o sabe quantos moradores ter�o no arquivo, logo, o vetor deve ser alocado dinamicamente. Ao finalizar, exiba na tela quantos moradores foram lidos.

b) Exiba na tela uma lista alinhada da quantidade de pessoas por faixa de idade em intervalos de 5 anos (idades de 89 a 0).
Ex:
De 85 a 89 anos -  3 moradores
De 80 a 84 anos - 15 moradores
De 75 a 79 anos - 30 moradores
De 70 a 74 anos - 45 moradores

c) Em seguida solicite uma faixa de idade (m�nima e m�xima) para a qual ser� gerada uma listagem.
Crie um arquivo de sa�da no modo texto contendo todos os dados dos moradores daquela faixa de idade. O nome do arquivo de sa�da dever� ser:
"listagem_min-max.txt". E exiba na tela a quantidade de moradores salvos nessa listagem.

Exemplo de sa�da:
Digite a idade m�nima: 52
Digite a idade m�nima: 56
Foram encontrados 32 moradores
Arquivo gerado: listagem_52_56.txt*/

//criando estrutura com os dados dos moradores
typedef struct{
  char cpf[12];
  char telefone[12];
  int idade;
}dados_moradores;

//fun��o main
int main(){
    //para poder utilizar pontua��es
    setlocale(LC_ALL, "");
//declara��o de vari�veis
int cont_linha = 0;
char analisa_caracter;
char c;
char especifico[20];

//declarando e abrindo o arquivo para leitura
FILE *arquivo = fopen("moradores.txt", "r");
//analisando qunatas linhas tem no arquivo, j� que cada linha � equivalente a um morador
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
printf("A quantidade de moradores � igual a: %i\n", cont_linha);
//lendo o arquivo e a struct que comp�e cada uma e exibindo
for(size_t i = 0; i < 500; i++){
  fscanf(dados,"%s %2c", especifico, dados[i].cpf);
  fscanf(dados,"%s %2c", especifico, dados[i].telefone);
  fscanf(dados,"%s %2i", especifico, dados[i].idade);
}//for

return 0;
}//main
