#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;

    // Ler os números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        // Inicializar o maior e o menor com o primeiro número
        if (i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        } else {
            // Atualizar o maior e o menor
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    // Imprimir o resultado
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
