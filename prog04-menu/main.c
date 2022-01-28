#include <stdio.h>
#include <stdlib.h>

#define LINHA 3  /* número de linhas para apresentação do símbolo */ 
#define N_REP 30 /* número de vezes que símbolo será repetido na tela! */

void __menu();


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	__menu();
	printf("\nApresentacao do MENU de opcao.\n");
	
	return 0;
}

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
