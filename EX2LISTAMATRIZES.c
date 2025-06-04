#include <stdio.h>

int main(){

int m[10][10];
int i,j,l;
srand(time(NULL));


for(i=0;i<10;i++) {
    for (j=0;j<10;j++){

    m[i][j] = rand()%100;

    printf("%d\t", m[i][j]);


    }
    printf("\n");
}


    printf("Insira a linha que deseja visualizar :");
    scanf("%d",&l);

    for(i=0;i<10;i++) {

    printf("%d\n",m[l-1][i]);

    }

return 0;

}
