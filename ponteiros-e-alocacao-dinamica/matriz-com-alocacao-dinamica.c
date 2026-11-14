#include <stdio.h>

int main (){
	
int linha,coluna,x,y;

printf("Digite a quantidade de linha de sua tabela: \n");
scanf("%d",&linha);

printf("Digite a quantidade de colunas de sua tabela: \n");
scanf("%d",&coluna);

float ** mat = (float **) malloc (sizeof(float*)*linha);

for (y=0; y< linha; y++){
	mat[y] = (float *) malloc(sizeof(float)* coluna);
	for (x=0; x<coluna; x++){
		printf("Digite o elemento da linha %d, coluna %d \n",y,x);
		scanf("%f", &mat[y][x]);
	}
}

}
