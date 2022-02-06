/********************************************
 * 
 * NOME:      CRYSTOPPHER SIMÃ•ES TRINDADE
 * DATA:      11/11/2021
 * PROGRAMA:  CALCULO DE VOLUME PARA CILINDRO 
 *
 ********************************************/

/* --- Bibliotecas --- */
#include <stdio.h>
#define PI 3.14

/* --- Declaração de funções --- */
void imprime_tela_cabecalho();
float resultado(float value1, float value2);

/* ========================================================================= */
/* --- Função Principal --- */
int main(){
	float raio = 0.0,
	      altura = 0.0;
	      
	unsigned short int i = 0;
while(1){
	
    imprime_tela_cabecalho();//chamada para funÃ§Ã£o de apresentaÃ§Ã£o do programa
	printf("=============================================\n\n");
	printf("INFORME RAIO DO CILINDRO: ");
	scanf("%f",&raio);
	printf("INFORME ALTURA DO CILINDRO: ");
	scanf("%f",&altura);
	printf("\nV = %.2f cm3\n\n",resultado(raio,altura));//chamada para funÃ§Ã£o de calculo do cilindro
	
	printf("DESEJA FINALIZAR O PROGRAMA ?\n");
	printf(" 1 - SIM    0 -  NAO\n\n");
	scanf("%d",&i);
	if(i) 	break;	//força a saída imediata do loop
	system("cls");
	
	} /* end laço while*/
	
	return 0;
}/* Fim do corpo principal da aplicaÃ§Ã£o */


/* ========================================================================= */
/* --- Desenvolvimento das funções --- */
void imprime_tela_cabecalho()
{
       printf("\t __________________________ \n");
       printf("\t(__________________________)\n");
       printf("\t|                          |\n");
       printf("\t|                          |\n");
       printf("\t|         _______          |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |_______          |\n");
       printf("\t|                          |\n");
       printf("\t|                          |\n");
       printf("\t|                          |\n");
       printf("\t|__________________________|\n");
       putchar('\n');
       printf("\t    VOLUME DO CILINDRO\n");
       printf("\nO volume do cilindro Ã© calculado em cm3 ou m3.\n");
       return;
}


float resultado(float value1, float value2)
{
	// V = Ï€.r2.h
	return PI * ((value1*value1) * value2);
}
