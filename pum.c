#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, valor,numerosLinhas;
    valor = 1; 
    scanf("%d",&numerosLinhas);


    for(i=1;i<=numerosLinhas*4;i += 4){
        printf("%d %d %d PUM\n", i, i + 1, i + 2);
    }

    return 0;
}