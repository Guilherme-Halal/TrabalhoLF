
	
	int 	i=0;//interage pelos estados do autômato
	int 	j=0;//interage com a pilha
	int 	e=0;//interage pelo vetor de entradas
	bool 	leEntrada; //acho que nem precisa dessas variáveis aqui...
	//estados de tokens de 0 a 48: 0-25 letra - 26-35 numero - 36-45 especiais - 46 main - 47 if - 48 <>  
	//estado 49 P
	//estado 50 Q
	//estado 51 é o fim de palavra ($)
	//estado 52 é o fim da entrada (#)

// estados:
/*

*/



	while(entrada[e]!='#'){
		
		switch(i){
			case 50://estado Q
				leEmtrada=true;
				lePilha=false;
				push(/*valor do símbolo inicial <programa> */);
				i=49;
				break;
			case 49://estado P
				i=entrada[e];
				e++;
				break;
			case 0://estado P'a'
				pop();
				j=pilha->poped;
				
				if(i==j)//na real não é esse teste mas deixa assim por enquanto...
					i=49;
				else
					pilha=manipulaPilha(i, j, pilha);
				//i=i;
				break;
					
				pilha=manipulaPilha(int i, int j, TOP *pilha){
					
					switch(j){ 	// é um case pra cada símbolo do lado esquerdo das regras da gramática
								// e o default é erro
						case 60:
							break;
						case 61:
							break;
						case 62:
							break;
						case 63:
							
							break;
						case 64:
							
							break;
						case 65:
							
							break;
						case 66:
							
							break;
						case 67:
							
							break;
						case 68:
							
							break;
						case 69:
							
							break;
						case 70:
							
							break;
						case 71:
							
							break;
						case 72:
							
							break;
						case 73:
							
							break;
						case 74:
							
							break;
						case 75:
							
							break;
						case 76:
							
							break;
						case 77:
							
							break;
						case 78:
							
							break;
						case 79:
							
							break;
						case 80:
							
							break;
						case 81:
							
							break;
						case 82:
							break;
						case 83:
							break;
						case 84:
							break;
						case 85:
							break;
						case 86:
							break;
						case 87:
							break;
						case 88:
							break;
						case 89:
							break;
						case 90:
							break;
						case 91:
							break;
						case 92:
							break;
						case 93:
							break;
						case 94:
							break;
						case 95:
							break;
						case 96:
							break;
						case 97:
							break;
						case 98:
							break;
						case 99:
							break;
						case 100:
							break;
						case 101:
							break;

						default:
						printf("entrada inválida para a gramática");
						exit(1);
					}
		}
	}
		  
		
	