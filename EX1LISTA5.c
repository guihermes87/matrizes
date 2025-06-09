#include <stdio.h>
#include <stdlib.h>

int main(){

int m[3][5];
int i,j;

printf("Informe os elementos da matriz:\n");

    for(i=0;i<3;i++){
        for(j=0;j<5;j++) {
        printf("Elemento[%d][%d]:",i,j);
        scanf("%d",&m[i][j]);

    }

}

    printf("Matriz 3x5");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++) {

    printf("%d\t", m[i][j]);

    }
    printf("\n");
}


return 0;

}
