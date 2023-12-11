/*
	FPR - Manh�
	
	Data: 12/05/2021
	
	Lista de Exerc�cios VIII - Structs
	
	Quest�o 01:
	Uma loja de autom�veis mant�m os carros � venda sob a forma de um vetor de structs 
	contendo as seguintes informa��es, para cada ve�culo: placa, modelo, marca, cor, 
	quilometragem, ano modelo/fabrica��o (deve ser um struct), valor e tipo (usado ou 
	0 km, conforme o valor do campo quilometragem). 

	Pede-se a declara��o de uma vari�vel que represente o estoque de ve�culos da 
	loja, incluindo todas as declara��es de tipos que possam ser necess�rias.

	Al�m disso, implementar as seguintes fun��es:
	i.	 Exibir todos os carros do modelo m, ano de fabrica��o entre a1 e a2 
	     (inclusive), com valor n�o superior a x reais;
	ii.	 Reajustar os valores de todos os carros 0 km, considerando um aumento de 2.5%;
	iii. Retirar do estoque um determinado ve�culo, dada a sua placa.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TRUE 1
#define FALSE 0

//declara��o de tipos
typedef struct {
	int fabricacao, modelo;
} TAno;

typedef struct {
	char placa[9];
	char modelo[20];
	char marca[10];
	char cor[20];
	float km;
	TAno ano;
	float valor;
	char tipo[6];	
} TCarro;

//prot�tipos das fun��es
void exibirCarros (TCarro loja[], int quant, char m[20], int a1, int a2, float x);
void reajusar0km (TCarro loja[], int quant);
int  retirarDoEstoque (TCarro loja[], int *quant, char placa[9]);

//main
void main ()
{
	
	
}

//implementa��o das fun��es

//exibir dados de um carro
void exibirDadosCarro (TCarro carro)
{
	printf ("\nPlaca: %s\n", carro.placa);
	printf ("\nModelo/Marca: %s/%s\n", carro.modelo, carro.marca);
	printf ("\nCor: %s - Km: %.1f\n", carro.cor, carro.km);
	printf ("\nAno: %d/%d\n", carro.ano.fabricacao, carro.ano.modelo);
	printf ("\nValor: R$ %.2f\n", carro.valor);
	printf ("\nTipo: %s\n", carro.tipo);
}

//Exibir todos os carros do modelo m, ano de fabrica��o entre a1 e a2 (inclusive), 
//com valor n�o superior a x reais
void exibirCarros (TCarro loja[], int quant, char m[20], int a1, int a2, float x)
{
	//declara��o de vari�veis
	int i;
	
	//varrendo o vetor de carros
	for (i=0;i<quant;i++)
	{
		if ((strcmp(loja[i].modelo,m) == 0) &&  //verificando o modelo
		    (loja[i].ano.fabricacao >= a1) && (loja[i].ano.fabricacao <= a2) && //verificando o ano de fabricacao
			(loja[i].valor <= x))
		{
			exibirDadosCarro (loja[i]);	
		}
	}
}

//Reajustar os valores de todos os carros 0 km, considerando um aumento de 2.5%
void reajusar0km (TCarro loja[], int quant)
{
	//declara��o de vari�veis
	int i;
	
	//varrendo o vetor de carros
	for (i=0;i<quant;i++)
	{
		//verificando se � um carro 0 km
		if (loja[i].km == 0)
		{
			loja[i].valor += (loja[i].valor * 0.025); //0.025 = 2,5%
			//loja[i].valor = (loja[i].valor * 1.025); //0.025 = 2,5%
		}
	}
}
	
//Retirar do estoque um determinado ve�culo, dada a sua placa
int  retirarDoEstoque (TCarro loja[], int *quant, char placa[9])
{
	//declara��o de vari�veis
	int i;
	
	//varrendo o vetor
	for (i=0;i<*quant;i++)
	{
		//verificando se a placa passada por par�metro foi encontrada
		if (strcmp(loja[i].placa,placa) == 0)
		{
			//removendo o carro cuja a placa foi passada por par�metro
			loja[i] = loja[(*quant)-1];
			/*observa��o: notem que a c�pia foi feita de todo o struct, de uma �nica
			  vez. Isto �, n�o � necess�rio copiar campo a campo!*/			
			
			(*quant)--;
			
			return TRUE;						
		}
	}
	
	//carro n�o encontrado na loja
	return FALSE;
}
