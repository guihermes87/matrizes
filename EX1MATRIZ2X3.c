#include <stdio.h>

int main(){

int numeros [2][3];
int i,j,n;



 printf("Informe os elementos da matriz 2x3:\n ");

for(i=0;i<2;i++) {
    for (j=0;j<3;j++){

    printf("numeros [%d][%d]:",i,j);
    scanf("%d", &numeros[i][j]);

}
}
    printf("Informe o multiplicador\n");
    scanf("%d",n);


for(i=0;i<2;i++) {
    for (j=0;j<3;j++){

            numeros[i][j] = numeros[i][j]*n;
            printf("%d\t",numeros[i][j]);
    }
}
    printf("\n");


return 0;

}
