#include <stdio.h>

int main(){

float notas [5][3];
int i,j;

for(i=0;i<5;i++)
for (j=0;j<3;j++){

printf("Nota [%d][%d]: ", i,j);
scanf("%d", &notas[i][j]);


}

return 0;
}
