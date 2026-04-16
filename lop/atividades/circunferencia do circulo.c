#include <stdio.h>
void main(){
	const float PI= 3,14;
	const float area= 2;
	float r,h,c;
	
	printf("digite o raio");
	scanf("%f", &r);
	
		printf("digite a altura");
	scanf("%f", &h);
	
	c= 2*PI * r * (r*h);
	
	 printf("a area do circulo e %f",c);
	 
	 getch();
}