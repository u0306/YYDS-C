//Implementar un programa que muestre por pantalla la suma total de los enteros de 1 al 10 (ambos incluidos).

#include <stdio.h>

int main(void) {
    int a = 1;
    int sum = 0;
    while(a <= 10) { 
        sum = sum + a;  //sum += a;
        a++;
    
    }
    printf("la suma de a:%d\n",sum);
   
}

