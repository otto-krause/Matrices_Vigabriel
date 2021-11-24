#include <stdio.h>

int main(){
 int a[2][3];
 for(int I = 0; I < 2; I++){
 for (int F = 0; F < 3; F++){
 printf("Escriba el valor de la fila %d y la columna %d: ", I+1, F+1);
 scanf("%d", &a[I][F]);
}
}
 for(int I = 0; I < 3; I++){
 a[0][I] *= 4;
}
 for(int I = 0; I < 3; I++){
 a[1][I] *= 3;
}
 for(int I = 0; I < 2; I++){
 for (int F = 0; F < 3; F++){
 printf("%d\t", a[I][F]);
}
 putchar('\n');
}
}
