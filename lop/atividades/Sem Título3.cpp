#include <stdio.h>
int main(){
	float v, d, t;
	
	printf("Digite a velocidade em km/h:\n");
	scanf("%f", &v);
	printf("Digite a distância a ser percorrida em km\n");
	scanf("%f", &d);
	
	t = d / v;
	
	printf("Você levará %.1f horas para percorrer.", t);
}