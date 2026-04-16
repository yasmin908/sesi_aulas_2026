#include <stdio.h>
void main (){
  char nome[100];
  float nota1, nota2, nota3, media;
  printf("digite as notas \n");
  scanf("%f %f %f", &nota1, &nota2, &nota3);
  media= (nota1 + nota2 + nota3)/3;
  if(media>=7){
  	printf("aprovado\n");
  }else {
  	printf("reprovado\n");
  }
  getch();
}