#include <cstdio>

int main() {
    int soma = 0;
    for (int i = 2; i <= 200; i += 2) {
        soma += i;
    }
    printf("A soma dos 100 primeiros números pares é: %d\n", soma);
    return 0;
}
