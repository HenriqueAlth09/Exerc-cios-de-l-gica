//Biblioteca
#include <stdio.h>
//Inicio
int main (){
    int n1, n2;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite um numero:\n");
    scanf("%d", &n2);
    
    
    //Aqui eu usei um se não se, para verificar se o numero é par ou não//
    if (n1 > n2 )
    {
        printf("Seu numero maior é: %d\n", n1);
    }
   else 
  {
      printf("Seu numero maior é: %d\n", n2);
  }
  return 0;
}