#include <stdio.h>

int main(){
    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    //aqui eu usei um if else para fazer um teste logico//
    if( idade < 16 )
    {
        printf("Você não pode votar!!");
    }
    else if ( idade < 18 )
    {
        printf("O voto é facultativo!!");
    }
    else if ( idade >=18 && idade < 69 )
    {
        printf("Você é obrigado a votar!!");
    }
    else if ( idade >= 70 )
    {
        printf("Voto facultativo");
    }
    
   return 0;
    
}
