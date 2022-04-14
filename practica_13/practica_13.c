#include <stdio.h>

int main(void) {
    int a[2][3];
    int b[3][3];
    int c[2][3];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("El a[%d][%d] es : ",i ,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("El b[%d][%d] es : ",i ,j);
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
    
        }
        printf("\n");
    }   
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("b[%d][%d] = %d\t", i, j, b[i][j]);
    
        }
        printf("\n");
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for(int k = 0; k < 3; k++){
                c[i][j] = (c[i][j] + (a[i][k] * b[k][j]));
            }
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("c[%d][%d] = %d \t",i ,j ,c[i][j]);
    
        }
        printf("\n");
    }
}