//Preguntar al usuario las notas de 3 personas
//Comprueba que n_alum1 es mayor que n_alum2
//Comprueba tambien n_alum3 es mejor de todo? imprime el resultado

#include <stdio.h>

int main(void) {
    int n[3];
    int a = 0;
    while(a < 3) {
        printf("la nota de n[%d]:",a);
        scanf("%d", &n[a]);
        a++;
    }
    if(n[0] > n[1]) {
        printf("la nota de n_alum1 es mejor que n_alum2\n");
    }else {
    printf("no\n");

    }
    if((n[2] > n[0]) && (n[2] > n[1])) {
        printf("la nota de n_alum3 es mejor de todo\n");
    }else if ((n[0] > n[2]) && (n[1] < n[2])) {
        printf("la nota de n_alum1 es mejor que n_alum3\n");
    }else if ((n[1] > n[2]) && (n[0] < n[2])) {
        printf("la nota de n_alum2 es mejor que n_alum3\n");
    }else {
        printf("la nota de n_alum1 y n_alum2 son mejor que n_alum3\n");
    }
}