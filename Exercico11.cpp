#include <stdio.h>

int main() {
    float numero, soma = 0, media;
    int i;

    printf("Vamos calcular a média de 10 números!\n");

    // Loop para obter 10 números e calcular a soma
    for (i = 1; i <= 10; i++) {
        printf("Digite o %d° número: ", i);
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma / 10; // Cálculo da média

    printf("A média dos números informados é: %.2f\n", media);

    return 0;
}
