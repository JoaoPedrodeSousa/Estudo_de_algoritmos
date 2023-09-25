#include <stdio.h>

// Q-1
int main(){
    int X;
    scanf("%d",&X);
    
    
    if (X < 1800 || X > 2022 || X % 2 != 0 || X == 1916 || X == 1942 || X == 1946){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", X);
    }
    else{
        if(X % 4 == 0 ){
            printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n",X);
        }
        else{
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n",X);
        }
    }

    return 0;
}

// Q-2
#include <stdio.h>

int main() {
    int numero, digito, soma = 0;
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh impar\n", numero);
    }

    while (numero != 0) {
        digito = numero % 10; 
        soma += digito;       
        numero /= 10;         
    }

    printf("A soma dos algarismos de %d eh igual a %d\n", numero, soma);

    return 0;
}
