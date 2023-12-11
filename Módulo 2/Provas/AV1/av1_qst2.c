/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 05/05/2021   -   AV1
	
	Questão 02:	

******************************************************************************/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipo das funções

int testarSenha (char s[]);

//função main
void main ()
{
	//declaração de variáveis
	char s[30];
	
	//leitura da string
	fflush (stdin);
	printf ("Entre com uma senha: ");
	gets (s);
	
	//printando resultado
	printf ("%d ", testarSenha(s));
	
}

int testarSenha (char s[]){
	
	//declaração de variáveis
	
	int i, j, cont=0, contMaiusculo=0, contMinusculo=0, repeticao=0;
	
	if (strlen(s) < 6 || strlen(s) > 10){
		
		return 0;
	}
	
	else {
		
		for (i=0; s[i] != '0'; i++){
			
			if(s[i] >= '0' && s[i] <= '9'){
			
				cont++;
					
			}
					
		}
		
		if(cont<0 || cont>3){
					
			return 0;
		
		}
		
		
		for (i=0, j=1; s[j]!='\0'; i++, j++){
			
			if ((s[i]>='0' && s[i]<='9') && (s[j]>='0' && s[j]<='9')){
				
				return 0;
			}
			
		}
		
		
		for (i=0; s[i]!='\0'; i++){
			
			if (!(s[i] >= 0) && !((s[i] >= 'a') && (s[i] <='z')) && !((s[i] >= 'A') && (s[i] <= 'Z')) 
			&& s[i] != '@' && s[i] != '#' && s[i] != '$' && s[i] != '%'){
			
			return 0;
			
			}
		}	

		
		for (i=0, j=i+1; s[j]!='\0';i++, j++){
			
			if (s[i] == s[j]){
				
				repeticao++; 
				
				printf("\n\n%d\n\n" , repeticao);
				
				if(repeticao>=2){
					
					return 0;
					
				}
			}
		}
		
		for (i=0; s[i]!='\0'; i++){
			
			if ((s[i] >= 'A') && (s[i] <= 'Z')){
			
				contMaiusculo++;
				
			}
			
			if ((s[i] >= 'a') && (s[i] <= 'z')){
				
				contMinusculo++;
				
			}
		
		}
		
		if(contMaiusculo < 1){
			
			return 0;
		}
	
		if(contMinusculo < 1){
			
		return 0;
		
		}
		
		return 1;
	}
	
}

	
