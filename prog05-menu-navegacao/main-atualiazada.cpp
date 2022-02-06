/* ============================================================================
    Autor: CRYSTOPPHER SIM�ES TRINDADE
    Data:  03/02/2022
    Programa: Menu vers�o 1.0
============================================================================ */


/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* --- Fun��es --- */
int __menu(); 
void func1();
//void func2();

 int opcao_selecao = 0x00; 
/* --- Fun��o Principal --- */
main()
{


 
 
 int opcao_selecao = 0x00; 
 //printf("%d",opcao_selecao);
  
  do
  {
  		opcao_selecao = __menu(); /*opcao do usu�rio escolhida no menu fica armazenada nesta vari�vel*/	
  		//printf("%d",opcao_selecao);
  		switch(opcao_selecao)
		  {
		  	/*usu�rio precionando 'bot�o' da DIREITA*/
		  	case 82 : 
		  	case 114 :  func1();
		  	break;
		  	
		  	/*usu�rio precionando 'bot�o' da ESQUERDA*/
		  	case 76 : 
		  	case 108 :  
		  	break;
		  	
		  	/*usu�rio precionando 'bot�o' da ENTER*/
		  	case 69 : 
		  	case 101 :  
		  	break;
		  	
		  	/*usu�rio precionando 'bot�o' da RETORNAR*/
		  	case 71 : 
		  	case 103 :  
		  	break;
		  	
		  	default: printf("OPCAO INVALIDA!\n");	
		  }
  }
  while(opcao_selecao != 0);
  
  system("PAUSE");	                             /* pausa excu��o (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* --- Desenvovimento das fun��es --- */
int __menu()
{
	char op = 0x00; /*Vari�vel inicializada em 0*/
	
	printf("\n\n === MENU DE OPCOES === \n");
	printf("Digite r   - DIREITA:       \n");
	printf("Digite l   - ESQUERDA:      \n");
	printf("Digite e   - ENTER:         \n");
	printf("Digite g   - RETORNAR:      \n");	
	putchar('>');
	scanf(" %c",&op);/*coleta a op��o do usu�rio*/
	//printf("%c - %d",op,op);
	return (int)op; 
	
	/*
	 * retorna a para fun��o principal a op��o escolhida pelo usu�rio
	 * a fun��o ira receber o valor va vari�vel op com seu n�mero 
	 * representante na parte inteira, conforme a tabela ASCII
	 */
 } 

void func1()
{
	for(;;)
	{
	unsigned short int i = 0;
	
	printf("2 TELA - MENU DE TEMPERATURA.\n");

	printf("DESEJA FINALIZAR O PROGRAMA ?\n");
	printf(" 1 - SIM    0 -  NAO\n\n");
	scanf("%d",&i);
	if(i) 	break;	//for�a a sa�da imediata do loop
	
	} /* end laco for */
}

//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_TELAS 2 /* N�MERO DE TELAS CRIADAS PELO PROGRAMADOR PARA APLICA��O */
//
//void func1_temp();
//void function2();
//void function3();
//
//int main(int argc, char *argv[]) {
//	
//	/* simula��o de bot�es de navega��o do menu */
//	char POSITION_DIREITA = 0,	/* simula bot�o de navega��o para DIREITA  */
//		 POSITION_ESQUERDA = 0X00,  /* simula bot�o de navega��o para ESQUERDA */
//		 POSITION_RETURN = 0X00,    /* simula bot�o de navega��o para RETORNAR */
//		 POSITION_ENTER = 0X00; 	/* simula bot�o de navega��o para ENTER    */
//		 
//	unsigned short TELA_MENU = 0,    /* flag para marcar as posi��o do MENU        */
//				   STATUS_TELA = 0;	/* flag para marcar as posi��o da TELA ATUAL  */
//				   
//	
//	printf("Digite D   - DIREITA: \n");
//	printf("Digite ESQ - ESQUERDA: \n");
//	printf("Digite E   - ENTER: \n");
//	printf("Digite R   - RETORNAR: \n");
//	
//	scanf(" %c",&POSITION_DIREITA); /* Captura da informa��o digitada pelo usu�rio */
//	
//		if( POSITION_DIREITA == 'r' && TELA_MENU == 0){
//		
//		
//		/* SE USU�RIO PRESSIONAR A TECLA PARA 'DIREITA' E A TELA DE MENU FOR A N�MERO 0
//		 * � CHAMADA A FUN��O, CASO CONTR�RIO O PROGRAMA PROSSEGUE PARA PROXIMA INSTRU��O
//		 */
//				func1_temp(); /* chamada para fun��o */
//					
//	   } else 
//		if( TELA_ATUAL == 1 )
//				function1(); /* chamada para fun��o */		
//			else 
//		if(  TELA_ATUAL == 2 )
//				function3(); /* chamada para fun��o */	
//		
//
//	return 0;
//}
//
//void func1_temp()
//{
//	/*
//	 * PROGRAMADOR PODE DEFINIR NOVAS FUNCIONALIDADES PARA PROGRAMA
//	 */
//	
//	for(;;)
//	{
//		unsigned short int i = 0;
//		printf("DESEJA FINALIZAR O PROGRAMA ?\n");
//		printf(" 0 - SIM    1 -  NAO\n\n");
//		scanf("%d",i);
//		if(i) 	break;	//for�a a sa�da imediata do loop
//	}
//	
//} /* end void function1() */
//
//void function2()
//{
//	
//} /* end void function2() */
//
//void function3()
//{
//	
//} /* end void function3() */


