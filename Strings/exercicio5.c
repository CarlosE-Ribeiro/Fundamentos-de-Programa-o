// blibiotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
/*Faça um programa que receba uma frase e depois exiba quantas vezes
cada vogal aparece. Ele deve contar considerando o tamanho da String.*/

void limpar_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}//limpar_buffer

int main (){
  setlocale(LC_ALL, ""); // poder usar pontuações

char frase[100][1]; // vetor gfrase
int  l =0, j =0, contaa =0, contae =0, contai =0, contao =0, contau =0; // variaveis


printf("Digte uma frase:\n"); // pedindo pro usuario entrar com uma frase
fgets(frase[j], 100, stdin);// armazenando esse frase
frase[j][strcspn(frase[j],"\n")]='\0'; // trocando \n por \0
limpar_buffer(); //limpando lixo

for( j = 0; j < 1; j++){ // // loop para analisar linha
  for(l = 0; l < strlen(frase[j]); l ++){ // loop para analisar coluna
if((frase[j][l]=='a') || (frase[j][l]=='A') ){ // se tiver a
contaa++; // conta +1 no a
} if((frase[j][l]=='e') || (frase[j][l]=='E') ){// se tiver e
contae++;// conta +1 no e
}if((frase[j][l]=='i') || (frase[j][l]=='I') ){// se tiver i
  contai++;// conta +1 no i
}if((frase[j][l]=='o') || (frase[j][l]=='O') ){// se tiver o
  contao++;// conta +1 no o
}if((frase[j][l]=='u') || (frase[j][l]=='U') ){// se tiver u
  contau++;// conta +1 no u
    }//if
  }//for interno
} // for externo

printf(" quantidade de 'a': %i\n",contaa);// exbibe quanta vezes aparaceleu a  vogal a
printf(" quantidade de 'e': %i\n",contae);// exbibe quanta vezes aparaceleu a  vogal e
printf(" quantidade de 'i': %i\n",contai);// exbibe quanta vezes aparaceleu a  vogal i
printf(" quantidade de 'o': %i\n",contao);// exbibe quanta vezes aparaceleu a  vogal o
printf(" quantidade de 'u': %i\n",contau);// exbibe quanta vezes aparaceleu a  vogal u

return 0;
}//main
