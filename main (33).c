#include <stdio.h>
#include <locale.h>

int main (){ 
    setlocale (LC_ALL,"");
    int opcao, num1, num2, res;
    printf("Selecione qual tipo de calculo deseja fazer (1-4): \n");
    printf("1- Soma\n");
    printf("2- Subtração\n");
    printf("3- Divisão\n");
    printf("4- Multiplicação\n");
    scanf("%d", &opcao);
    
    //usei um switch case para casos variados//
    switch(opcao){
        case 1:
        printf("Você escolheu Soma");
        printf("qual o primeiro numero??");
        scanf("%d", &num1);
        printf("qual o segundo numero??");
        scanf("%d", &num2);
        res= (num1 + num2);
        printf("O resultado é: %.2d", res);
        break;
        
        case 2:
        printf("Você escolheu Subtração");
        printf("qual o primeiro numero??");
        scanf("%d", &num1);
        printf("qual o segundo numero??");
        scanf("%d", &num2);
        res= (num1 - num2);
        printf("O resultado é: %.2d", res);
        break;
        
        
        case 3:
        printf("Você escolheu Divisão ");
        printf("qual o primeiro numero??");
        scanf("%d", &num1);
        printf("qual o segundo numero??");
        scanf("%d", &num2);
        res= (num1 / num2);
        printf(" O resultado é: %.2d", res);
        break;
        
        case 4:
        printf("Você escolheu Divisão ");
        printf("qual o primeiro numero??");
        scanf("%d", &num1);
        printf("qual o segundo numero??");
        scanf("%d", &num2);
        res= (num1 * num2);
        printf("O resultado é: %.2d", res);
        break;}
        
        return 0;
}