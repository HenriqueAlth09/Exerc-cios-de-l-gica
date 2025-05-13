//Biblioteca
#include <stdio.h>
//Inicio
int main (){
    int n1, res;  
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    res = n1%2;
    //Aqui eu usei um se não se, para verificar se o numero é par ou não//
    if (res == 0  )
    {
        printf("Seu numero é par\n");
    }
   else 
  {
      printf("Seu numero é impar\n");
  }
  return 0;
}
