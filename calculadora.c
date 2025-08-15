#include <stdio.h>
#include <math.h>

int main()
{
    int v1,v2,r1,r2,r3,r4;
    
    printf("Digite um primeiro valor: ");
    scanf("%d", &v1);
    
    printf("Digite um segundo valor: ");
    scanf("%d", &v2);
    
    r1 = v1 + v2;
    r2 = v1 - v2;
    r3 = v1 * v2;
    
    printf("\nResultado da soma: %d\n",r1);
    printf("Resultado da subtração: %d\n",r2);
    printf("Resultado da multiplicação: %d\n",r3);
    
    if(v2!=0) {
        r4 = v1 / v2;
        printf("Resultado da divisão: %d\n",r4);
   }
     else
        printf("Número dividido por zero, inválido");   
   
 return 0;   
}