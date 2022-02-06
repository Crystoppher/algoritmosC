/********************************************
 * 
 * NOME:      CRYSTOPPHER SIMÃ•ES TRINDADE
 * DATA:      25/11/2021
 * PROGRAMA:  MENU- V1.0 
 *
 ********************************************/
 
 /* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

#define LINHA 3  /* número de linhas para apresentação do símbolo */ 
#define N_REP 30 /* número de vezes que símbolo será repetido na tela! */


/* --- Declaração de funções --- */
void __menu();

/* ========================================================================= */
/* --- Função Principal --- */
int main(int argc, char *argv[]) {
	
	__menu();
	printf("\nApresentacao do MENU de opcao.\n");
	
	return 0; 
} /* end main */

/* ========================================================================= */
/* --- Desenvolvimento das funções --- */
void __menu()
{
		int i,j;
	
	for(i = 0; i < LINHA; i++)
	{
		
		for(j = 0; j < N_REP;j++)
		{
			putchar('#');	/* Insere caracter para representar o símbolo na tela */
		}/* End for interno */
		
		putchar('\n'); /* insere nova linha */
		
	}/*End dor externo*/
}
