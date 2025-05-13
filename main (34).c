#include <stdio.h>
#include <stdlib.h>


int main(){
   int tabuada, i, opcao, res;
   do{
   
   printf("Digite o número que deseja multiplicar: \n");
   scanf("%d", &tabuada);
   printf("A tabuada sera do numero; %d\n", tabuada);
   
   for(i = 1;i<=10;i++){
       printf("%d x %d = %d\n",tabuada, i, res = tabuada*i);
   }
   
   printf("Digite 1 para continuar ou 0 para sair: ");
   scanf("%d", &opcao);
   
   if (opcao==1){
       system("clear");
    }
   
       
   }while (opcao != 0);
   printf("Saindo\n");

return 0;
}