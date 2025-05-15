#include <stdio.h>

int main() {
    int numero, maior, menor, i;
    printf("Digite o 1° número: ");
    scanf("%d", &numero);
    maior = menor = numero;

    // Loop para ler os próximos 9 números
    for (i = 2; i <= 10; i++) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    // Exibe os resultados
    printf("\nO maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);

    return 0;
}
