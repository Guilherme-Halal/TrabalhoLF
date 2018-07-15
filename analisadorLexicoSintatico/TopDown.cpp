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


TOP* push(TOP* pilha, int dado){		//função que poe dados na pilha de operandos
            pilha->valor[pilha->topo]=dado;
            pilha->topo++;
return pilha;
}

TOP* pop(TOP* pilha){					//função que retira valores da pilha de operandos
	pilha->poped=pilha->valor[pilha->topo];
        pilha->topo--;
	return pilha;
}
