#include <stdio.h>

int main() {
    int vetor[5];

    // Ler os números
    for (int i = 0; i < 5; i++) {
        printf("Digite o número: ");
        scanf("%d", &vetor);
    }

    // Imprimir o vetor invertido
    printf("Vetor invertido: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", vetor);
    }

    return 0;
}
