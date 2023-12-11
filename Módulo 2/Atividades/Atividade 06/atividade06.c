/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 30/05/2021   -   Atividade 6
	
	Quest�o 1: 

	Uma determinada faculdade mant�m o seu �mapa de salas� armazenado sob a forma 
	de uma matriz tridimensional de structs, considerando que:

	i. O pr�dio possui 8 andares e, em
	cada andar, h� 10 salas;
	
	ii. Uma vez que h� atividades em todos
	os turnos, � necess�rio que a
	aloca��o de salas seja separada por
	turno (matutino, vespertino e
	noturno).
	
	E o que representa este �mapa de salas�? Apenas um controle que diz a que turma 
	determinada sala est� alocada, em um dado turno. Para isto, cada posi��o da 
	matriz dever� armazenar as seguintes informa��es:
	
	- status (int): 0 � livre; 1 � alocada; 2 �
	em manuten��o;
	
	- curso (string): caso a sala esteja
	alocada, a que curso;
	
	- per�odo (int): caso a sala esteja alocada, a qual per�odo daquele curso.
	
	Sobre este cen�rio, pede-se:
	
	1. A declara��o da matriz, assim como de todos os tipos de dados associados 
	� sua estrutura;
	
	2. Uma fun��o que, dado um curso, exiba todas as salas ocupadas por ele. 
	Ao exibir cada sala, utilizar o formato do exemplo a seguir:
	
	M75: sala 5 do 7o andar, turno manh�
	
	
	Notas:
	
	i. Podem considerar que as salas variam de 0 a 9, assim como os 
	andares de 0 a 7;
	
	ii. Quanto aos turnos, considerar: 0 � matutino; 1 � vespertino; 
	2 � noturno.
	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//defini��o de constantes
#define L 10
#define C 8
#define P 3

//declara��o de tipos
typedef struct{
	
	char curso[30];
	int status, periodo;
	
}TSala;

//prot�tipo das fun��es
void exibirSalasOcupadas (TSala s[C][L][P]);
void leituraDados (TSala s[C][L][P]);

//fun��o main
void main (){
	
	//declara��o de vari�veis
	TSala salas[C][L][P];
	
	//lendo os dados
	leituraDados (salas);
	
	//exibindo salas ocupadas por determinado curso
	exibirSalasOcupadas (salas);
	
}

//implementa��es das fun��es
void leituraDados (TSala salas[C][L][P]){
	
	//declara��o de vari�veis
	int i, j, k;
	
	//lendo dados que o usu�rio digitar
	for (i=0; i<C; i++){
		
		for (j=0; j<L; j++){
			
			for (k=0; k<P; k++){
				
				//exibindo pro usu�rio qual sala/andar/turno ele est� alocando/deixando livre/deixando em manuten��o
				printf ("Sala %d do andar %d do turno %d" , j, i, k);
				
				printf ("\n\nEsta sala esta: \n\n0 - livre\n1 - alocada\n2 - em manutencao\n\n");
				scanf ("%d" , &salas[i][j][k].status);
				
				if (salas[i][j][k].status != 1){
					
					salas[i][j][k].curso, "%s", "Vazio";
					salas[i][j][k].periodo = 0;
					
				}
				
				else {
					
					//usu�rio vai digitar a que curso a sala esta alocada
					fflush (stdin);
					printf ("\nDigite o curso a qual esta sala esta alocada: ");
					gets (salas[i][j][k].curso);
					
					//usu�rio vai digitar que periodo pertence aquele curso
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
	
	//declara��o de vari�veis
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
