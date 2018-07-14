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
	int a, i;
char alfabeto[50] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', "(", ")", "[", "]" "=", ">", "<", "+", "-", ","};
char tokensMultiLetras[2][];
tokensMultiLetras[0][]="main";
tokensMultiLetras[1][]="if";	
//{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '=', '>', '<', '<>', '+', '-', '*', '/', '%', '?'};

	for(i=0; i<40; i++){
	a = alfabeto[i];
    printf("%d\n", a);
}


    return 0;
}

