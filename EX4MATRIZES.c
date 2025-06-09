#include <stdio.h>
#include <stdlib.h>

int main(){

int m[4][4];
int i,j;
int x, linhax,colunax;
srand(time(NULL));

printf("Matriz 4x4:\n ");

    for(i=0;i<4;i++) {
        for (j=0;j<4;j++){

        m[i][j] = rand()%50;
        printf("%d\t",m[i][j]);

    }
    printf("\n");
}

    for(i=0;i<4;i++) {

        printf("Diagonal principal:");
        for (j=0;j<4;j++){
        if(i=j)
        printf("%d\t", m[i][j]);

        }
    }

    //Maior valor da matriz e sua posição

    x = m[0][0];

    for(i=0;i<4;i++) {

        for (j=0;j<4;j++){

        if (m[i][j]>x) {
        x = m[i][j];
        linhax=i;
        colunax=j;
        }

        }
    }

    printf("Maior valor %d\n",x);
    printf("Na linha %d e coluna %d", linhax,colunax);

return 0;

}
