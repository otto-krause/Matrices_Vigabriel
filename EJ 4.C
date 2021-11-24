#include <stdio.h>

int main(){
 int T = 0, TL = 0;
 int a[3][12];
 for(int i = 0; i < 3; i++){
 for (int f = 0; f < 12; f++){
 printf("Escriba la recaudacion del colectivo %d de la linea %d: ", f+1, i+1);
 scanf("%d", &a[i][f]);
}
}
 for(int i = 0; i < 3; i++){
 TL = 0;
 for (int f = 0; f < 12; f++){
 printf("El colectivo %d de la linea %d es %d\n",f, i, a[i][f]);
 T+= a[i][f];
 TL+= a[i][f];
}
 printf("La recaudacion total de la linea %d es: %d\n", i, TL);
}
 printf("la recaudacion total es %d\n", T);
 return 0;
}
