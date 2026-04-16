#include <stdio.h>
void main(){
	
    const float toneladasalqueires = 250;
    const float caminhoes = 18;
    float a, b, c;
    
    printf("digite o numero de alqueires:");
    scanf("%f", &a);
    
    printf("digite o numero de caminhoes:");
    scanf("%f", &b);
   
    c = (a * 250)/( b * 18);
   
    printf("serao necessarias %f", c);
   
    getch();
}