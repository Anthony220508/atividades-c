#include <stdio.h>

struct carteira {
	
	char nome[100];
	int conta;
	float saldo;
};

int main(){
	
	struct carteira digital[4];
	int i;
	
	for(i=0; i<4; i++){
		printf("Digite o seu nome: \n");
		scanf("%s",&digital[i].nome);
		
		printf("Digite o seu tipo de conta: [1 = POUPANCA | 2 = SALARIO | 3 = CORRENTE]\n");
		scanf("%d",&digital[i].conta);
		
		printf("Digite o seu saldo: \n");
		scanf("%f",&digital[i].saldo);
	}
		
		//=====================================================\\
		
		printf("\n");
		printf("-=--=-==-=-=--=-=-=-=-=-=-==-=-=-=-=-");
		printf("\n");
	
		for(i=0; i<4; i++){
			if (digital[i].conta != 2){
				printf("O cliente: %s pode fazer emprestimos! \n",digital[i].nome);
				printf("Ele pode sacar: %.2f\n",digital[i].saldo * 0.8);
			}
		}
	
		printf("-=--=-==-=-=--=-=-=-=-=-=-==-=-=-=-=-");
		printf("\n");
}
