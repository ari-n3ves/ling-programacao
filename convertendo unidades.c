#include <stdio.h>
#include <math.h>

int main()
{
    float M,l,qm;
    int C,Q,f;
 
 printf("Esse programa faz a conversão de:\n");
 printf(" Celsius para Fahrenheit\n Metros para Quilômetros\n Quilos para Libras \n");
 
 
 printf("\n Digite a temperatura em celsius: ");
 scanf("%d", &C);
 
 printf("Digite uma distância em metros: ");
 scanf("%f", &M);
 
 printf("Digite uma quantidade em quilos: ");
 scanf("%d", &Q);
 
 
 f = (C * 1.8) + 32;
 qm = M / 1000;
 l = Q * 2.2046;
 
 
 //saidas
 
 printf("\nO valor de %dºC é: %dºF  \n",C,f);
 printf("O valor de %.0fm é: %.1fk/M \n",M,qm);
 printf("O valor de %dKg é: %.5flb \n",Q,l);
 
 return 0;   
}