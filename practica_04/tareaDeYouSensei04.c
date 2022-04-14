//reserva cuantos espacios
//pedir las notas de x personas
//calcula la nota media de ellos
#include <stdio.h>

int main(void) {
    int x;
    //n[0], n[1], n[2]...
    printf("el espacio que reserva es:");
    scanf("%d", &x);
    //printf("%d",x);
    int n[x];
    int a = 0;
    int sum = 0;
    while(a < x) {
        printf("la nota de n[%d]:",a);
        scanf("%d", &n[a]);

        sum = sum + n[a];
        a++;    

    } 
    float div = sum / x ;
    printf("la nota media de ellos es:%.2f\n",div);
}