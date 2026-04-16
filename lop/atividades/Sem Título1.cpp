#include <stdio.h>

int main(){
    float a,b,c,res;
    
    printf("informe o valor de A:");
    scanf("%f",&a);

    printf("informe o valor de B:");
    scanf("%f", &b);
    
    printf("informe o valor de C:");
    scanf("%f", &c);
    
    res-(a+b)/c;
    
    printf("(%f+%f)/%f=>%f",a,b,c,res);
    
    getch();
}