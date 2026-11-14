#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

	int ladoA=0;
	int ladoB=0;
	int ladoC=0;
	
	printf("Digite o valor do Lado A:\n");
	scanf("%d",&ladoA);
	
	printf("Digite o valor do Lado B:\n");
	scanf("%d",&ladoB);

	printf("Digite o valor do Lado C:\n");
	scanf("%d",&ladoC);

	printf("\nOs seus valores sao esses: %d %d %d\n",ladoA,ladoB,ladoC);
	
	if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA)
		printf("Essas medidas formam um triangulo!!\n");
	else
		printf("Essas medidas nao formam um triangulo!!\n");
		
		
	if (ladoA == ladoB && ladoA == ladoC)
		printf("\nEle tambem é equilatero");
	else
		printf("\nEle nao e equilatero\n");
		
	
	if (ladoA > ladoB && ladoA > ladoC)
		if (pow(ladoB, 2) + pow(ladoC, 2) > ladoA)
			printf("Seu Triangulo e Acutangulo!!\n");
		
		else
			printf("Seu Triangulo e Obtusangulo!!\n");
	
	else if  (ladoB > ladoA && ladoB > ladoC)
		if (pow(ladoA, 2) + pow(ladoC, 2) > ladoB)
			printf("Seu Triangulo e Acutangulo!!\n");
		else
			printf("Seu Triangulo e Obtusangulo!!\n");
			
	else if (ladoC > ladoA && ladoC > ladoB)
		if (pow(ladoB, 2) + pow(ladoA, 2) > ladoC)
			printf("Seu Triangulo e Acutangulo!!\n");
		else
			printf("Seu Triangulo e Obtusangulo!!\n");
	
	
	if (ladoA > ladoB && ladoA > ladoC)
		if (pow(ladoB, 2) + pow(ladoC, 2) == pow(ladoC, 2))
			printf("Seu triangulo e retangulo!");
		else
			printf("Seu triangulo nao e retangulo");
	
	if (ladoB > ladoA && ladoB > ladoC)
		if (pow(ladoA, 2) + pow(ladoC, 2) == pow(ladoB, 2))
			printf("Seu triangulo e retangulo!");
		else
			printf("Seu triangulo nao e retangulo");
	
	if (ladoC > ladoA && ladoC > ladoB)
		if (pow(ladoA, 2) + pow(ladoB, 2) == pow(ladoC, 2))
			printf("Seu triangulo e retangulo!");
		else
			printf("Seu triangulo nao e retangulo");
			
}
