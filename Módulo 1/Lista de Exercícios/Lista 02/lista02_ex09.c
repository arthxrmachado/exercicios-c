#include <stdio.h>

int main ()
{
	
	//variáveis
	
	int pedido, quantidade;
	float preco;
	
	//corpo do programa
	
	printf("100 - Cachorro-quente: 3.50\n101 - Bauru simples: 4.50\n102 - Bauru com ovo: 5.20\n103 - Hamburguer: 3.00\n104 - Cheeseburger: 4.00\n105 - Refrigerante: 2.50");
	
	printf("\n\nEscreva o codigo do pedido: ");
	scanf("%i" , &pedido);
	
	printf("\nEscreva a quantidade: ");
	scanf("%i" ,  &quantidade);
	
	if(pedido==100){
		preco=3.50*quantidade;
		printf("O preco a ser pago e: %0.2f" , preco);
	} else {
		if(pedido==101){
			preco=4.50*quantidade;
			printf("O preco a ser pago e: %0.2f" , preco);
		} else {
			if(pedido==102){
				preco=5.20*quantidade;
				printf("O preco a ser pago e: %0.2f" , preco);
			} else {
				if(pedido==103){
					preco=3.00*quantidade;
					printf("O preco a ser pago e: %0.2f" , preco);
				} else {
					if(pedido==104){
						preco=4.00*quantidade;
						printf("O preco a ser pago e: %0.2f" , preco);
					} else {
						if(pedido==105){
							preco=2.50*quantidade;
							printf("O preco a ser pago e: %0.2f" , preco);
						}
					}
				}
			}
		}
	}
	

}
