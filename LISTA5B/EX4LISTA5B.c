#include <stdio.h>
#include <stdlib.h>

int main(){

int m[6][7];
int i,j,fila;
srand(time(NULL));

printf("Matriz 6x7:\n");

    for(i=0;i<6;i++) {
        for (j=0;j<7;j++){

        m[i][j] = rand()%50;
        printf("%d\t",m[i][j]);

        }
        printf("\n",m[i][j]);
    }

printf("Insira a fila :");
scanf("%d",fila);

    for (j=0;j<7;j++) {

        if (m[fila][j]=fila)
        printf("%d\t",m[fila-1][j]);

    }

return 0;

}
