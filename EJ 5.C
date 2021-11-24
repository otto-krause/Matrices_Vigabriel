#include <stdio.h>

 void mostrar(int g, int h, int x[g][h]){
 printf("\t1 T\t2 T\t3 T\tPromedio");
 int p;
 for(int i = 0; i < h; i++){
 p=0;
 printf("%d :\t", i);
 for (int f = 0; f < g; f++){
 printf("%d\t", x[f][i]);
 p+=x[f][i];
}
 printf("%d", p/3);
 putchar('\n');
}
}
 int main(){
 int a[3][100];
 for(int i = 0; i < 3; i++){
 for (int f = 0; f < 100; f++){
 printf("Escriba la nota del alumno %d en el trimestre %d: ", f+1, i+1);
 scanf("%d", &a[i][f]);
}
}
 mostrar(3, 100, a);
 char resp[3];
 for(;;){
 printf("Quiere cambiar un dato ?");
 scanf("%s", &resp);
 if(resp[0] == 'S' || resp[0] == 's'){
 printf("Escriba el numero de legajo del alumno, el trimestre a corregir y la nueva nota: ");
 int T,V,N;
 scanf("%d %d %d", &V, &T, &N);
 a[T][V] = n;
 mostrar(3, 100, a);
}
 else
 break;
}
        
 return 0;
}
