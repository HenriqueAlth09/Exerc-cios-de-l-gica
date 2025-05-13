#include <stdio.h>

int main(){
    float not1, not2, med, som;
    printf("Digite o primeiro numero: ");
    scanf("%f", &not1);
    printf("Digite a segunda nota: ");
    scanf("%f", &not2);
    som = (not1 + not2);
    med = som / 2;
    if (med >= 7)
    {
        printf("Você foi aprovado: %2.f", med);
    }
    else
    {
        printf("Você foi reprovado: %2.f", med);
    }

    return 0;
}
