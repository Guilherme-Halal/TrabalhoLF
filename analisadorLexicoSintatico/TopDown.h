/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TopDown.h
 * Author: guilherme
 *
 * Created on 14 de Julho de 2018, 15:11
 */

#ifndef TOPDOWN_H
#define TOPDOWN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<locale.h>

typedef struct pilhaTopDonw TOP;	

struct pilhaTopDonw{
	int *valor;
	int topo;
	int tamanho;
//	int poped; para conferencia se necessário
};

TOP* push(TOP* pilha, int dado);
TOP* pop(TOP* pilha);



#endif /* TOPDOWN_H */

