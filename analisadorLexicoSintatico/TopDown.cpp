/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include<cstdlib>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "TopDown.h"
#include<locale.h>
using namespace std;


//manipulação de pilha

TOP *pilha=NULL;
pilha=(TOP*)malloc(sizeof(TOP)*10);

TOP* push(TOP* pilha, int dado){		//função que poe dados na pilha de operandos
	if(pilha->topo<(pilha->tamanho*0.75)){
	pilha->valor[pilha->topo]=dado;
	pilha->topo++;
	}
	else{
	pilha->tamanho*=2;
	pilha->valor=(int*)realloc(pilha->valor, sizeof(int)*pilha->tamanho);
	pilha->valor[pilha->topo]=dado;
	pilha->topo++;
	}
return pilha;
}

TOP* pop(TOP* pilha){					//função que retira valores da pilha de operandos
	pilha->topo--;
	pilha->valor=pilha->valor[pilha->topo];
	
	/*if(pilha->topo<(pilha->limite*0.25)){
		pilha->limite/=2;
		pilha->operando=(int*)realloc(pilha->operando, sizeof(int)*pilha->limite);
	}*/
	return pilha;
}
