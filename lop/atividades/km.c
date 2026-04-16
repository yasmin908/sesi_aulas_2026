#include <stdio.h>
void main(){
	float km, tempo;
	const int constante = 900;

	printf("digite a distancia");
	scanf("%f", &km);

	tempo= km/900;

	printf("escreva as horas que o aviao 747-300 precisa para sobrevoar a distancia e %f ", tempo);

	getch();
}