#include <stdio.h>
#include <math.h>

int main()
{
  float n1,n2,n3,n4,m;
  
  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  
  printf("Digite a terceira nota: ");
  scanf("%f", &n3);
  
  printf("Digite a quarta nota: ");
  scanf("%f", &n4);
  
  //calculo
  
  m = (n1 + n2 + n3 + n4)/4;
  
  if (m < 7.0){
      printf("\nReprovado\n");
      printf("Se dedique da próxima!\n");
      
  }
  
   else
   printf("\nParabéns você foi Aprovado!!\n");
    
    return 0;
}
