/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 30/05/2021   -   Atividade 6
	
	Questão 1: 

	Uma determinada faculdade mantém o seu “mapa de salas” armazenado sob a forma 
	de uma matriz tridimensional de structs, considerando que:

	i. O prédio possui 8 andares e, em
	cada andar, há 10 salas;
	
	ii. Uma vez que há atividades em todos
	os turnos, é necessário que a
	alocação de salas seja separada por
	turno (matutino, vespertino e
	noturno).
	
	E o que representa este “mapa de salas”? Apenas um controle que diz a que turma 
	determinada sala está alocada, em um dado turno. Para isto, cada posição da 
	matriz deverá armazenar as seguintes informações:
	
	- status (int): 0 – livre; 1 – alocada; 2 –
	em manutenção;
	
	- curso (string): caso a sala esteja
	alocada, a que curso;
	
	- período (int): caso a sala esteja alocada, a qual período daquele curso.
	
	Sobre este cenário, pede-se:
	
	1. A declaração da matriz, assim como de todos os tipos de dados associados 
	à sua estrutura;
	
	2. Uma função que, dado um curso, exiba todas as salas ocupadas por ele. 
	Ao exibir cada sala, utilizar o formato do exemplo a seguir:
	
	M75: sala 5 do 7o andar, turno manhã
	
	
	Notas:
	
	i. Podem considerar que as salas variam de 0 a 9, assim como os 
	andares de 0 a 7;
	
	ii. Quanto aos turnos, considerar: 0 – matutino; 1 – vespertino; 
	2 – noturno.
	
******************************************************************************/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//definição de constantes
#define L 10
#define C 8
#define P 3

//declaração de tipos
typedef struct{
	
	char curso[30];
	int status, periodo;
	
}TSala;

//protótipo das funções
void exibirSalasOcupadas (TSala s[C][L][P]);
void leituraDados (TSala s[C][L][P]);

//função main
void main (){
	
	//declaração de variáveis
	TSala salas[C][L][P];
	
	//lendo os dados
	leituraDados (salas);
	
	//exibindo salas ocupadas por determinado curso
	exibirSalasOcupadas (salas);
	
}

//implementações das funções
void leituraDados (TSala salas[C][L][P]){
	
	//declaração de variáveis
	int i, j, k;
	
	//lendo dados que o usuário digitar
	for (i=0; i<C; i++){
		
		for (j=0; j<L; j++){
			
			for (k=0; k<P; k++){
				
				//exibindo pro usuário qual sala/andar/turno ele está alocando/deixando livre/deixando em manutenção
				printf ("Sala %d do andar %d do turno %d" , j, i, k);
				
				printf ("\n\nEsta sala esta: \n\n0 - livre\n1 - alocada\n2 - em manutencao\n\n");
				scanf ("%d" , &salas[i][j][k].status);
				
				if (salas[i][j][k].status != 1){
					
					salas[i][j][k].curso, "%s", "Vazio";
					salas[i][j][k].periodo = 0;
					
				}
				
				else {
					
					//usuário vai digitar a que curso a sala esta alocada
					fflush (stdin);
					printf ("\nDigite o curso a qual esta sala esta alocada: ");
					gets (salas[i][j][k].curso);
					
					//usuário vai digitar que periodo pertence aquele curso
					printf ("\nDigite o periodo que o curso presente nesta sala esta: ");
					scanf ("%d" , &salas[i][j][k].periodo);
					
				}
				
				//limpando a tela
				system("cls");
								
			}
			
		}
			
	}
	
}

void exibirSalasOcupadas (TSala salas[C][L][P]){
	
	//declaração de variáveis
	int i, j, k, retorno = 0;
	char curso[30];
	
	fflush (stdin);
	printf("Digite o curso que deseja procurar: ");
	gets (curso);
	
	for (i=0; i<C; i++){
		
		for (j=0; j<L; j++){
			
			for (k=0; k<P; k++){
				
				retorno = strcmp(curso, salas[i][j][k].curso);
				
				if (retorno == 0){
					
					//usando esses if's para conseguir escrever "matutino, vespertino, noturno" como foi pedido
					if(k == 0){
					
						printf ("\nM%d%d: sala %d do %do. andar, turno matutino\n" , j, i, j, i);
					
					}
					
					else if(k == 1){
						
						printf ("\nM%d%d: sala %d do %do. andar, turno vespertino\n" , j, i, j, i);
						
					}
					
					else{
						
						printf ("\nM%d%d: sala %d do %do. andar, turno noturno\n" , j, i, j, i);	
						
					}
					
				}
				
			}
			
		}
			
	}
		
}
