#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("%d é maior\n", num1);
    } else if (num2 > num1) {
        printf("%d é maior\n", num2);
    } else {
        printf("Os números são iguais\n");
    }
    return 0;
}

