#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, valor,numerosLinhas;
    valor = 1; 
    scanf("%d",&numerosLinhas);


    for(i=1;i<=numerosLinhas; i++){
        printf("%d %d %d PUM\n", valor, valor + 1, valor + 2);
        valor += 4;
    }

    return 0;
}