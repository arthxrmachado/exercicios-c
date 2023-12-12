/*

QUESTÃO 01: Uma loja de automóveis mantém os carros à venda sob a forma de um vetor de structs contendo as seguintes informações, para cada veículo: 
placa, modelo, marca, cor, quilometragem, ano modelo/fabricação (deve ser um struct), valor e tipo (usado ou 0 km, conforme o valor do campo quilometragem). 

Pede-se a declaração de uma variável que represente o estoque de veículos da loja, incluindo todas as declarações de tipos que possam ser necessárias.

Além disso, implementar as seguintes funções:

i. Exibir todos os carros do modelo m, ano de fabricação entre a1 e a2 (inclusive), com valor não superior a x reais;
ii. Reajustar os valores de todos os carros 0 km, considerando um aumento de 2.5%;
iii. Retirar do estoque um determinado veículo, dada a sua placa.

*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TRUE 1
#define FALSE 0

//declaração de tipos
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

//protótipos das funções
void exibirCarros (TCarro loja[], int quant, char m[20], int a1, int a2, float x);
void reajusar0km (TCarro loja[], int quant);
int  retirarDoEstoque (TCarro loja[], int *quant, char placa[9]);

//main
void main ()
{
	
	
}

//implementação das funções

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

//Exibir todos os carros do modelo m, ano de fabricação entre a1 e a2 (inclusive), 
//com valor não superior a x reais
void exibirCarros (TCarro loja[], int quant, char m[20], int a1, int a2, float x)
{
	//declaração de variáveis
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
	//declaração de variáveis
	int i;
	
	//varrendo o vetor de carros
	for (i=0;i<quant;i++)
	{
		//verificando se é um carro 0 km
		if (loja[i].km == 0)
		{
			loja[i].valor += (loja[i].valor * 0.025); //0.025 = 2,5%
			//loja[i].valor = (loja[i].valor * 1.025); //0.025 = 2,5%
		}
	}
}
	
//Retirar do estoque um determinado veículo, dada a sua placa
int  retirarDoEstoque (TCarro loja[], int *quant, char placa[9])
{
	//declaração de variáveis
	int i;
	
	//varrendo o vetor
	for (i=0;i<*quant;i++)
	{
		//verificando se a placa passada por parâmetro foi encontrada
		if (strcmp(loja[i].placa,placa) == 0)
		{
			//removendo o carro cuja a placa foi passada por parâmetro
			loja[i] = loja[(*quant)-1];
			/*observação: notem que a cópia foi feita de todo o struct, de uma única
			  vez. Isto é, não é necessário copiar campo a campo!*/			
			
			(*quant)--;
			
			return TRUE;						
		}
	}
	
	//carro não encontrado na loja
	return FALSE;
}
