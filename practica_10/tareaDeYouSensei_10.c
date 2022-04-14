// Pedir al usuario un array[x]
// Compueba que existe el numero 5 en el array?
// Si existe este numero(5), imprime true
// En el caso contrario imprime false.
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int x;
    printf("El espacio de array que quieres es:");
    scanf("%d", &x);
    int n[x];
    for(int i = 0; i < x; i++) {
        printf("El n[%d]:",i);
        scanf("%d", &n[i]);
    }
    bool check;
    for(int i = 0; i < x; i++) {
        if(n[i] == 5) {
            check = true;
            i = x;  //braek;
            // 懂了吗
            // 找到，直接跳出循环或者用break
        }else {
            check = false;
        }
    }
    if(check) {
        printf("Existe el numero 5.");
    }else {
        printf("No existe");
    }

}
