#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    int fatorial = 1;
    printf("%d! = ", num);
    for (int i = 1; i <= num; i++) {
        fatorial *= i;
        if (i == num) {
            printf("%d", i);
        } else {
            printf("%d * ", i);
        }
    }
    printf(" = %d\n", fatorial);
    return 0;
}
