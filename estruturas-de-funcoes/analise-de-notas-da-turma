#include <stdio.h>

float calcularMediaTurma(float alunos[], int tamanho){
	
	int i;
	float total;
	float media;
	
	for (i=0;i<tamanho;i++){
		total += alunos[i];
	}
	
	media = total / tamanho;
	
	return media;
}

float encontrarMaiorNota(float alunos[], int tamanho){
	
	int i;
	float maior = alunos[0];
	
	for (i=0;i<tamanho;i++){
		if(alunos[i] > maior){
			maior = alunos[i];
		}
		
	}
	
	return maior;
}

int contarAprovados(float alunos[],int tamanho){
	
	int i;
	int aprovados = 0;
	
	for(i=0;i<tamanho;i++){
		if(alunos[i] >= 7){
			aprovados += 1;
		}
	}
	
	return aprovados;
}

	int main(){
		
		float notas[10];
		int tamanho = 10;
		int i;
		
		for(i=0;i<tamanho;i++){
			printf("Digite a nota numero %d: ",i+1);
			scanf("%f",&notas[i]);
		}
		
		
		float media = calcularMediaTurma(notas,tamanho);
		printf("A media da turma eh de: %.2f \n",media);
		
		float maior = encontrarMaiorNota(notas,tamanho);
		printf("A maior nota da turma eh de: %.2f \n",maior);
		
		int aprovados = contarAprovados(notas,tamanho);
		printf("A quantidade de alunos aprovado na turma eh de: %d",aprovados);
	}
