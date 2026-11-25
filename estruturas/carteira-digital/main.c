#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "meubanco.h"

int main(){
	
	printf("\n");
	
	int quant;
	printf("==== Digite a quantidade de clientes a serem cadastrados ===");
	printf("\n");
	printf("\n");
	printf("Quantidade = ");
	scanf("%d",&quant);

	printf("\n");
	
	struct carteira meusclientes[quant];
	
	cadastrarCliente(meusclientes, quant);
	
	saidaPrograma (meusclientes, quant);
}
