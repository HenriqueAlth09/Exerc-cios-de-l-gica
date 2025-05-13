#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0;

    // Ler os números
    for (int i = 0; i < 10; i++) {
        printf("Digite os números: ");
        scanf("%d", &numeros);

        // Verificar se o número é par
        if (numeros % 2 == 0) {
            pares++;
        }
    }

    // Imprimir o resultado
    printf("Quantidade de números pares: %d\n", pares);

    return 0;
}
