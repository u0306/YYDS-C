// crear 2 array ,cada uno de ellos con 10 espacios
// Comparar array1[i] y array2[i] es igual 
// si es igual meter en array3[i]

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n[10];
    int n1[10];
    for(int i = 0; i < 10; i++) { 
        printf("El n[%d] es:",i);
        scanf("%d", &n[i]);
        printf("El n1[%d] es:", i);
        scanf("%d", &n1[i]);
    }
    bool check;
    int n2[10];
    for(int i = 0; i < 10; i++) {
        if(n[i] == n1[i]) {
            check = true;
            n2[i] = n[i];
        }else {
            n2[i] = 0;
            
        }
    }
    if(check) {
        printf("Existe iguales\n");
    }else {
        printf("No Son iguales\n");
    }
    for(int i = 0; i < 10; i++) {
        printf("El n2[%d] es:%d\n", i, n2[i]);

    }
}
