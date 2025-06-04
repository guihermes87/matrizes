#include <stdio.h>

int main(){

float notas [5][3];
int i,j,n;

for(i=0;i<5;i++) {
for (j=0;j<3;j++){

printf("Nota [%d][%d]: ", i,j);
scanf("%f", &notas[i][j]);


}
}
// EXIBIÇÃO DA MATRIZ NA TELA

//printf("Matriz de notas\n");

//for(i=0;i<5;i++){
    //for (j=0;j<3;j++){
       // printf("%.1f\t", notas[i][j]);
    //}

  // printf("\n");

   printf("Insira o numero do aluno\n");
   scanf("%d", &n);

    printf("Notas do aluno %d", n);
    for (j=0;j<3;j++){

        printf("%.1f\t\n",notas[n-1][j]);
    }

return 0;
}
