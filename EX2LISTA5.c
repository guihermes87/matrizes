#include <stdio.h>
#include <stdlib.h>

int main(){

int m[5][5];
int i,j;
float media,somadiagonal,soma;


    for(i=0;i<5;i++){
        for(j=0;j<5;j++) {

        m[i][j] = rand()%100;


    }

}

    printf("Matriz 5x5\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++) {

    printf("%d\t", m[i][j]);

    }
    printf("\n\n");
}
    printf("Diagonal principal:");
    for(i=0;i<5;i++) {
        for (j=0;j<5;j++){
        if(i==j)

        printf("%d\t",m[i][j]);

        somadiagonal +=m[i][j];

        }
    }

        media = somadiagonal/5;
        printf("\n\nMedia e %.2f",media);

        for(i=0;i<5;i++) {
            for (j=0;j<5;j++){

        soma +=m[i][j];
    }

    }

     printf("\n\nA media dos vetores e de %.2f\n",soma/25);

       return 0;
    }



