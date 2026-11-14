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
};

void cadastrarCliente (struct carteira digital[]){
	
	printf("\n");
	
	int quant;
	printf("==== Digite a quantidade de clientes a serem cadastrados ===");
	printf("\n");
	printf("\n");
	printf("Quantidade = ");
	scanf("%d",&quant);

	printf("\n");
	
//=====================================================================================
	
	int i;
	int contador = 1000;
	
	for(i=0; i<quant; i++){
		printf("===================================================");
		printf("\n");
		printf("\n");

		
		printf("==== Digite o seu nome ====");
		printf("\n");
		printf("Nome = ");
		scanf("%s",&digital[i].nome);

		
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
		printf("Numero da Conta = %d-%d",contador,digital[i].conta);
		contador ++;
		
		printf("\n");
		printf("===================================================");
		printf("\n");
		printf("\n");
		
		
		if (digital[i].conta != 2){
			printf("==== O cliente: %s pode fazer emprestimos ====",digital[i].nome);
			printf("\n");
			printf("\n");
			printf("==== Ele pode sacar: %.2f ====",digital[i].saldo * 0.8);
			printf("\n");
		}
		else {
			printf("==== O cliente: %s nao pode fazer emprestimos ====",digital[i].nome);
			printf("\n");
			printf("\n");			
		}
	
		printf("\n");		
	};
};



//=====================================================================================
//============================funçao de tempo==========================================
//=====================================================================================



