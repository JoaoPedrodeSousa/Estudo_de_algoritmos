#include <stdio.h>

int main(){
    int valorInicial, vetor[10];

    scanf("%d", &valorInicial);
    vetor[0] = valorInicial;

    for(int posicao = 1;posicao < 10;posicao++){
        vetor[posicao] = 2*vetor[posicao - 1];
    }

    for(int posicao = 0;posicao < 10; posicao++){
        printf("N[%d] = %d\n", posicao, vetor[posicao]);
    }


    return 0;
}