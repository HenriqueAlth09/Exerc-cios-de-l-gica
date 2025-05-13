#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("Menu:\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 2:
                printf("Digite o primeiro número: ");
                scanf("%f", &num1);
                printf("Digite o segundo número: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
