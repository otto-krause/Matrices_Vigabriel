#include <stdio.h>

int main(){
 int M = 9999999, S = 0;
 int a[2][3];
 for(int i = 0; i < 2; i++){
 for (int f = 0; f < 3; f++){
 printf("Escriba el valor de la fila %d y la columna %d: ", i+1, f+1);
 scanf("%d", &a[i][f]);
}
}
 for(int i = 0; i < 3; i++){
 a[0][i] *= 4;
}
 for(int i = 0; i < 2; i++){
 a[i][2] *= 3;
}
 for(int i = 0; i < 2; i++){
 for (int f = 0; f < 3; f++){
 printf("%d\t", a[i][f]);
 if (a[i][f] < M){
	M = a[i][f];
      }
      S+= a[i][f];
    }
    putchar('\n');
  }
  printf("el menor es %d, el total es %d\n", M, S);
  return 0;
}
