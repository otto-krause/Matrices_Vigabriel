#include <stdio.h>
const int PISOS = 20;
int main(){
    int a[PISOS][6];
    for(int i = 0; i<PISOS; i++){
        for(int f = 0; f<6; f++){
            printf("Escriba los habitantes del departamento %d en el piso %d: ", f+1,i+1);
            scanf("%d", &a[i][f]);
        }
    }
    int P,T =0;
    for(int i = 0; i<PISOS; i++){
        P=0;
        for(int f = 0; f<6; f++){
            P+=a[i][f];
            T+=a[i][f];
        }
        printf("El promedio de habitantes de los departamentos del piso %d es %d, con un total de %d\n",i+1, P/6, P);
    }
    printf("El total es %d, el promedio por piso es %d\n", T, T/PISOS);
}
