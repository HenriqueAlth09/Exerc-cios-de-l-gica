#include <stdio.h>

int main() {
    int soma = 0;
    for (int i = 2; i <= 200; i += 2) {
        soma += i;
    }
    printf("Soma: %d\n", soma);
    return 0;
}
