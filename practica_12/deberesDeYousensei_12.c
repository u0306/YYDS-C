#include <stdio.h>

int main(void) {
    int a[6][6];
    for(int i = 0;i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            printf("a[%d][%d] = ", i ,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
    
        }
        printf("\n");
    }
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if(i == j) {
                printf("a[%d][%d] = %d\t",i ,j ,a[i][j]);
            }

        }
    }
}