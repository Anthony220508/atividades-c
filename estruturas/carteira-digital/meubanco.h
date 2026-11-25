#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//=====================================================================================
//============================cadastro de clientes=====================================
//=====================================================================================


struct carteira {
	
	char nome[100];
	int conta;
	float saldo;
	char numero[10];
};

void cadastrarCliente (struct carteira digital[],int quant){
	
	int i;
	int contador = 1000;
	
	for(i=0; i<quant; i++){
		printf("===================================================");
		printf("\n");
		printf("\n");

		
		printf("==== Digite o seu nome ====");
		printf("\n");
		printf("Nome = ");
		scanf(" %99[^\n]",digital[i].nome);

		
		printf("\n");
		printf("Digite o seu tipo de conta: [1 = POUPANCA | 2 = SALARIO | 3 = CORRENTE]");
		printf("\n");
		printf("Tipo da Conta = ");
		scanf("%d",&digital[i].conta);
		
		printf("\n");
		printf("Digite o seu saldo: ");
		printf("\n");
		printf("Saldo = ");
		scanf("%f",&digital[i].saldo);
		
		printf("\n");
		sprintf(digital[i].numero, "%d-%02d",contador,digital[i].conta);
		printf("O numero da conta = %s",digital[i].numero);
		contador ++;
		
		printf("\n");
		printf("===================================================");
		printf("\n");
		printf("\n");
		
		
		if (digital[i].conta == 2 ){
			printf("==== O cliente: %s nao pode fazer emprestimos ====",digital[i].nome);
			printf("\n");
			printf("\n");
		}
	
		if (digital[i].conta == 1 && digital[i].saldo > 0){
			printf("==== O cliente: %s pode fazer emprestimos ====",digital[i].nome);
			printf("\n");
			printf("\n");
			printf("==== Ele pode sacar: %.2f ====",(digital[i].saldo * 10) * 0.25);
			printf("\n");
		}
		
		if (digital[i].conta == 3 && digital[i].saldo > 0){
			printf("==== O cliente: %s pode fazer emprestimos ====",digital[i].nome);
			printf("\n");
			printf("\n");
		}		
	};
};

void saidaPrograma (struct carteira digital[],int quant){
	
	int i; 
	float soma=0;
	
	for(i=0;i<quant; i++){
		soma += digital[i].saldo;
	};

	int aptos = 0;
	
	for(i=0;i<quant; i++){
		if(digital[i].conta == 1)
		aptos ++;
	};
	for(i=0;i<quant; i++){
		if(digital[i].conta == 3)
		aptos ++;
	};

//==============================================

		printf("===================================================");
		printf("\n");
		printf("\n");
		
		printf("==== Saldo Total do Banco ====");
		printf("\n");
		printf("Total = %.2f",soma);
		
		printf("\n");
		printf("\n");
		printf("==== Total de Clientes Aptos ====");
		printf("\n");
		printf("Total = %d",aptos);
};
