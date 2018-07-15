// Linguagens Formais
// 02/07/18
// Gisela Bairros (giselabairros@gmail.com)

#include <stdio.h>
#include <stdlib.h>
#include "automato.h"

#define MAX 500

FILE *arquivo;

char v[MAX];
int v2[MAX];
char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char digito[10]={'0','1','2','3','4','5','6','7','8','9'};
char caracter[10]={'+','-','=', '<', '>', ',', '[', ']', '(', ')'};

void main(){
    int i=0, j=0, aux;
    char simbolo;
    char nome_arquivo[20];

    printf("\nDigite o nome do arquivo a ser lido:\n");
    scanf("%s", &nome_arquivo);

    if ((arquivo = fopen(nome_arquivo, "r")) == NULL) {
		printf("\n\nNao foi possivel abrir o arquivo.\n");
		exit(1);
	}

	printf("\nLeitura do Arquivo:\n\n");

    while ((simbolo=fgetc(arquivo))!= EOF){
        v[i]=simbolo;
        printf("simbolo lido(%d): %c\n", i, v[i]);
        i++;
    }
    fclose(arquivo);
    i=0;
    j=0;

    printf("\nAnalise Lexica:\n\n");

    while (v[i]!='$'){
        //Verifica se eh o token "main"
        if(v[i]=='m' && v[i+1]=='a' && v[i+2]=='i' && v[i+3]=='n' && v[i+4]=='['){
            v2[j]=230; //230 é o main (suponhamos)
            printf("(%d-%d) simbolo testado: 'main' = %d\n", i, (i+3), v2[j]);
            //Incrementa o vetor v2
            j++;
            //Pula a leitura do vetor v1 para o "[" logo apos o main
            i=i+4;
        }
        //Verifica se eh o token "if"
        else if(v[i]=='i' && v[i+1]=='f' && v[i+2]=='['){
            v2[j]=231; //231 é o if (suponhamos)
            printf("(%d-%d) simbolo testado: 'if' = %d\n", i, (i+1), v2[j]);
            //Incrementa o vetor v2
            j++;
            //Pula a leitura do vetor v1 para o "[" logo apos o if
            i=i+2;
        }
        else if(v[i]=='<' && v[i+1]=='>'){
            v2[j]=232; //232 é o <> (suponhamos)
            printf("(%d) simbolo testado: '<>' = %d\n", i, v2[j]);
            //Incrementa o vetor v2
            j++;
            //Pula a leitura do vetor v1 para o proximo simbolo apos "<>"
            i=i+2;
        }
        //Ignora os espaços e quebra de linha
        else if(v[i]==' ' || v[i]=='\n' || v[i]=='\t'){
            i++;
        }
        else {
            if((pertenceAlfabetoLinguagem(v[i]))==-1){
                printf("\nO simbolo <%c> nao existe na linguagem.\n", v[i]);
                printf("\nErro Lexico.\n");
                exit(1);
            }
            else{
                //O simbolo lido eh letra, numero ou caracter especial pertencente a linguagem
                v2[j]=pertenceAlfabetoLinguagem(v[i]);
                printf("(%d) simbolo testado: '%c' = %d\n", i, v[i], v2[j]);
                i++;
                j++;
            }
        }
    }
    //Indica o final do programa no vetor v2, que seria o simbolo '$'
    v2[j]=500;
}
//Testa se o simbolo faz parte do alfabeto sigma da linguagem
int pertenceAlfabetoLinguagem(char simbolo){
    int x;
    for(x=0; x<26; x++){
         if(simbolo==alfabeto[x]){
            return (x);
         }
    }
    for(x=0; x<10; x++){
         if(simbolo==digito[x]){
            return (x+26);
         }
    }
    for(x=0; x<10; x++){
         if(simbolo==caracter[x]){
            return (x+36);
         }
    }
    //Nao pertence
    return -1;
}
