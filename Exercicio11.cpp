#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    int media = soma / 10;
    printf("A média é: %d\n", media);

    return 0;
}
