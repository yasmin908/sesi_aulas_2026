#include <stdio.h>
void main(){
	char nome[100];
	float vitorias,empates, derrotas, pontos;
	
	printf("digite o nome do time:");
	scanf("%[^\n]", &nome);
	
	printf("digite o numero de vitorias");
	scanf("%f", &vitorias);
	
	printf("digite o numero de empates:");
	scanf("%f", &empates);
	
	printf("digite o numero de derrotas:");
	scanf("%f", &derrotas);
	
    pontos = vitorias * 3 + empates;
	
    printf("o total de pontos e: %f", pontos);
	
	getch();
}
	