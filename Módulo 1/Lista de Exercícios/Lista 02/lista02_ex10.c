#include <stdio.h>

int main ()
{
	//variáveis
	
	int escolha;
	float a, b, c, maior, meio, menor;
	
	//corpo do programa
	
	printf("1 - Tres valores em ordem crescente\n2 - Tres valores em ordem decrescente\n3 - Maior valor no meio dos outros dois\n");
	printf("\nEscolha um numero:");
	scanf("%i" , &escolha);
	
	printf("\nDigite o valor de A:");
	scanf ("%f" , &a);
	
	printf("\nDigite o valor de B:");
	scanf ("%f" , &b);
	
	printf("\nDigite o valor de C:");
	scanf("%f" , &c);
	
	if(a>b){
		if(a>c){
			maior=a;
			{
			if(b>c){
			
				meio=b;
				menor=c;
			}
			else
			{
				meio = c;
				menor = b;
			}
		}
	}
}
	
	else if(b>a){
			if(b>c){
				maior=b;
				if(a>c){
					
					meio=a;
					menor=c;
				}
			
			else
			{
			meio=c;
			maior=a;
			}
		}
	}
	 
	else if(c>a){
			if(c>b){
				maior=c;
				if(a>b){
					
					meio=a;
					menor=b;
				}
				else
				{
					meio=b;
					menor=a;
				}
			}
		}
		
	else{
	
					maior=c;
					meio=b;
					menor=a;
}
	
	if(escolha==1){
		printf("%f %f %f" , menor, meio, maior);
	} 
	else if(escolha==2){
		printf("%f %f %f" , maior, meio, menor);
	}
	else if(escolha==3){
		printf("%f %f %f" , meio, maior, menor);
	}
}
