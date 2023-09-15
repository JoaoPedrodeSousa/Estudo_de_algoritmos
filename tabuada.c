#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, valor;
    scanf("%d",&valor);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d \n", i,valor, i*valor);
    }

    return 0;
}