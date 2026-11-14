#include <stdio.h>

int adicao(float a, float b){
	
	float calc = a + b;
	return calc;	
}

int subt(float a, float b){
	
	float calc = a - b;
	return calc;
}

int mult(float a, float b){
	
	float calc = a * b;
	return calc;
}

float divs(float a, float b){
	

	float calc = a / b;
	return calc;
}

void mensagem(){
	printf("=================================\n");
	printf("===   1 = ADICAO          === \n");
	printf("===   2 = SUBTRACAO       === \n");
	printf("===   3 = MULTIPLICACAO   === \n");
	printf("===   4 = DIVISAO         === \n");
	printf("===   5 = SAIR            === \n");
	printf("=================================\n");
}


	int main(){
		
		int i;
		
		float num1;
		float num2;
		float calc;
		
		do{
			
			mensagem();
			printf("\n");
			printf("Digite a sua operacao: ");
			scanf("%d",&i);
			
			if (i == 1){
				
				printf("Digite um numero: ");
				scanf("%f",&num1);
				
				printf("Digite mais um numero: ");
				scanf("%f",&num2);
				
				calc = adicao(num1,num2);
				
				printf("A adicao dos dois numero eh = %.2f \n \n",calc);
			}
			
			if (i == 2){
				
				printf("Digite um numero: ");
				scanf("%f",&num1);
				
				printf("Digite mais um numero: ");
				scanf("%f",&num2);
				
				calc = subt(num1,num2);
				
				printf("A subtracao dos dois numero eh = %.2f \n \n",calc);
			}
			
			if (i == 3){
				
				printf("Digite um numero: ");
				scanf("%f",&num1);
				
				printf("Digite mais um numero: ");
				scanf("%f",&num2);
				
				calc = mult(num1,num2);
				
				printf("A multiplicacao dos dois numero eh = %.2f \n \n",calc);
			
		}
		
			if (i == 4){
				
				printf("Digite um numero: ");
				scanf("%f",&num1);
				
				printf("Digite mais um numero: ");
				scanf("%f",&num2);
				
				calc = divs(num1,num2);
				
				printf("A divisao dos dois numero eh = %.2f \n \n",calc);
		}
	}
		
		while (i != 5);
			
			
	}
