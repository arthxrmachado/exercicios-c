/*

	Lista de Exerc�cios - IX
	
	QUEST�O 02: 
	Dados dois n�meros inteiros A e B, fazer uma fun��o que determine o n�mero de pot�ncias 
	de 2 existentes no intervalo definido pelos dois valores, assim como a maior delas.

*/

#include <stdio.h>

//prot�tipo das fun��es

void exibirPotencia (int a, int b);

//main

void main(){
	
	//vari�veis
	
	int valor1, valor2;
	
	//dados
	
	printf("Digite o primeiro valor: ");
	scanf ("%d" , &valor1);
	
	printf("Digite o segundo valor: ");
	scanf ("%d" , &valor2);
	
	exibirPotencia(valor1, valor2);
	
}

//implementa��o das fun��es

void exibirPotencia (int a, int b){
	
	//vari�veis
	
	int i, maior=0;
	   
     for(i=2; i<=b; i*=2){
        
            printf("\n%d", i);
            
        if(i>maior){
        	
        	maior=i;
        	
		} 
	}
	
	printf("\n\nO maior: %d", maior);
}
