/**
 * 0  0  0  
 * 0  0  0
 * 0  0  0
 * 
 * a[0][0] a[0][1] a[0][2]
 * a[0][0] a[1][0] a[2][0]
 * Matriz(a) de 3x3
*/
#include <stdio.h>

int main(void) {
    int a[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d,", &a[i][j]);
        }
    
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
    
        }
        printf("\n");
    
    }

    int sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum = sum + a[i][j];
        }    
    
    }
    printf("La suma total es:%d\n",sum);
}