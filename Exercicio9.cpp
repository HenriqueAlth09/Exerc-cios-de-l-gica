#include <stdio.h>

int main(){
    int opcao;
    int num1, num2;
     do{
         printf("Menu:\n");
         printf("1-Somar\n");
         printf("2-Subtrair\n");
         printf("3-Sair\n");
         scanf("%d", &opcao);
         
         switch (opcao){
             //usei um switch para casos variados//
             case 1:
             printf("Digite o primeiro numero: ");
             scanf("%d", &num1);
             printf("Digite o segundo numero: ");
             scanf("%d", &num2);
             printf("O resultado é: %d\n", num1 + num2);
             break;
             
             case 2:
             printf("Digite o primeiro numero: ");
             scanf("%d", &num1);
             printf("Digite o segundo numero: ");
             scanf("%d", &num2);
             printf("O resultado é: %d\n", num1 - num2);
             break;
             
             case 3:
             printf("Saindo...");
             break;
             
             default:
             printf("Opção invalida!\n");
         }
    } while (opcao != 3);

    return 0;
}
      
