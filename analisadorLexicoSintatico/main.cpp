/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: guilherme
 *
 * Created on 14 de Julho de 2018, 14:46
 */

#include<cstdlib>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    setlocale (LC_ALL, "Portuguese");
    pilha=(TOP*)malloc(sizeof(TOP)*500);
    
    //criar função de interface com apresentação da análise eta a etapa
    //exemplo   ::::rodando analisador sintático:::
    //          ::::análise concluida entrada sintatitamente válida 
    
    //          ::::rodando analisador lexico
    //          ::::arquivo asdadfadf.L resonhecido pelo autômato
    
 
    
    //Daqui pra baixo é uma tentativa de organizar os token num vetor por valor na ASCII
    //A ideia aqui é, por exemplo, por o valor ASCII do a na posição 0 do vetor sigma
    //to apanhando aqui pra definir o main e o if
	int a, i;
char alfabeto[50] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', "(", ")", "[", "]" "=", ">", "<", "+", "-", ","};
// TOKENS DE MAIS DE UMA LETRA
//main
//if


//{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '=', '>', '<', '<>', '+', '-', '*', '/', '%', '?'};

	for(i=0; i<40; i++){
	a = alfabeto[i];
    printf("%d\n", a);
}


    return 0;
}

