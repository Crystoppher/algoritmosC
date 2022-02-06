/* ============================================================================
    Autor: CRYSTOPPHER SIMÕES TRINDADE
    Data:  03/02/2022
    Programa: Menu versão 1.0
============================================================================ */


/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* --- Funções --- */
int __menu(); 
void func1();
//void func2();

 int opcao_selecao = 0x00; 
/* --- Função Principal --- */
main()
{


 
 
 int opcao_selecao = 0x00; 
 //printf("%d",opcao_selecao);
  
  do
  {
  		opcao_selecao = __menu(); /*opcao do usuário escolhida no menu fica armazenada nesta variável*/	
  		//printf("%d",opcao_selecao);
  		switch(opcao_selecao)
		  {
		  	/*usuário precionando 'botão' da DIREITA*/
		  	case 82 : 
		  	case 114 :  func1();
		  	break;
		  	
		  	/*usuário precionando 'botão' da ESQUERDA*/
		  	case 76 : 
		  	case 108 :  
		  	break;
		  	
		  	/*usuário precionando 'botão' da ENTER*/
		  	case 69 : 
		  	case 101 :  
		  	break;
		  	
		  	/*usuário precionando 'botão' da RETORNAR*/
		  	case 71 : 
		  	case 103 :  
		  	break;
		  	
		  	default: printf("OPCAO INVALIDA!\n");	
		  }
  }
  while(opcao_selecao != 0);
  
  system("PAUSE");	                             /* pausa excução (Pressione qualquer tecla para continuar . . .) */
  return 0;                                      /* retorna 0, se main for executada corretamente */
  
} /* end main */


/* --- Desenvovimento das funções --- */
int __menu()
{
	char op = 0x00; /*Variável inicializada em 0*/
	
	printf("\n\n === MENU DE OPCOES === \n");
	printf("Digite r   - DIREITA:       \n");
	printf("Digite l   - ESQUERDA:      \n");
	printf("Digite e   - ENTER:         \n");
	printf("Digite g   - RETORNAR:      \n");	
	putchar('>');
	scanf(" %c",&op);/*coleta a opção do usuário*/
	//printf("%c - %d",op,op);
	return (int)op; 
	
	/*
	 * retorna a para função principal a opção escolhida pelo usuário
	 * a função ira receber o valor va variável op com seu número 
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
	if(i) 	break;	//força a saída imediata do loop
	
	} /* end laco for */
}

//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_TELAS 2 /* NÚMERO DE TELAS CRIADAS PELO PROGRAMADOR PARA APLICAÇÃO */
//
//void func1_temp();
//void function2();
//void function3();
//
//int main(int argc, char *argv[]) {
//	
//	/* simulação de botões de navegação do menu */
//	char POSITION_DIREITA = 0,	/* simula botão de navegação para DIREITA  */
//		 POSITION_ESQUERDA = 0X00,  /* simula botão de navegação para ESQUERDA */
//		 POSITION_RETURN = 0X00,    /* simula botão de navegação para RETORNAR */
//		 POSITION_ENTER = 0X00; 	/* simula botão de navegação para ENTER    */
//		 
//	unsigned short TELA_MENU = 0,    /* flag para marcar as posição do MENU        */
//				   STATUS_TELA = 0;	/* flag para marcar as posição da TELA ATUAL  */
//				   
//	
//	printf("Digite D   - DIREITA: \n");
//	printf("Digite ESQ - ESQUERDA: \n");
//	printf("Digite E   - ENTER: \n");
//	printf("Digite R   - RETORNAR: \n");
//	
//	scanf(" %c",&POSITION_DIREITA); /* Captura da informação digitada pelo usuário */
//	
//		if( POSITION_DIREITA == 'r' && TELA_MENU == 0){
//		
//		
//		/* SE USUÁRIO PRESSIONAR A TECLA PARA 'DIREITA' E A TELA DE MENU FOR A NÚMERO 0
//		 * É CHAMADA A FUNÇÃO, CASO CONTRÁRIO O PROGRAMA PROSSEGUE PARA PROXIMA INSTRUÇÃO
//		 */
//				func1_temp(); /* chamada para função */
//					
//	   } else 
//		if( TELA_ATUAL == 1 )
//				function1(); /* chamada para função */		
//			else 
//		if(  TELA_ATUAL == 2 )
//				function3(); /* chamada para função */	
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
//		if(i) 	break;	//força a saída imediata do loop
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


