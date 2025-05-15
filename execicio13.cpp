int main() {
    int numeros[10], i, pares = 0;

    // Loop para ler os valores do usuário
    for (i = 0; i < 10; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verifica se o número é par
        if (numeros[i] % 2 == 0) {
            pares++;
        }
    }

    // Exibe o total de números pares
    printf("\nVocê digitou %d números pares.\n", pares);

    return 0;
}
