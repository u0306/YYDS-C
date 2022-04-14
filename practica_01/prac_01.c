// pedir al usuario dos numeros, realizar la suma y la resta.
// pedir al usuario dos numerio, realizar la multiplicacion y division.
#include <stdio.h>

int main(void) {
    int numb1;
    int numb2;
    /*float sum  = 0;
    float res  = 0;
    float mult = 0;
    float div  = 0;
    int   rest = 0;*/
    printf("Introduzca el primer numero:");
    scanf("%d",&numb1);
    printf("Introduzca el segundo numero:");
    scanf("%d",&numb2);
    /* sum = numb1 + numb2;
    printf("la suma es:%.2f\n",sum);
    res = numb1 - numb2;
    printf("La resta es:%.2f\n",res);
    mult = numb1 * numb2;
    printf("La multiplicacion es:%.2f\n",mult);
    div = numb1 / numb2;
    printf("La division es:%.2f\n",div);*/
    int rest = numb1 % numb2;
    printf("El resto es:%d\n",rest);









}
