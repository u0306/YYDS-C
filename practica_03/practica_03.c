// identificar de 1 al 10 cuales son los numeros impares y los numeros pares.

#include <stdio.h>

int main(void) {
    int a = 1;
    while(a <= 10) {
        if(a%2 == 0) {
            printf("si el numero es par:%d\n",a);

        }else {
            printf("si el numero es impar:%d\n",a);
        }
        a++;
    }

}