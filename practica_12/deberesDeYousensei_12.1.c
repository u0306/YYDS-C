/**
 * La suma de los dos matriz
 * La suma de cada fila de matriz a
 * El minimo de la diagonal de matriz b
*/

#include <stdio.h>

int main(void) {
    int a[3][3];
    int b[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("b[%d][%d] = ",i ,j);
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("a[%d][%d] = %d\t", i, j, a[i][j]);
    
        }

        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("b[%d][%d] = %d\t", i, j, b[i][j]);
    
        }

        printf("\n");
    }
    int c[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("la suma de dos matriz son c[%d][%d]: %d\n",i ,j ,c[i][j]);
        }
    }
    int R[3];
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            sum = sum + a[i][j];
        }
        R[i] = sum;
        printf("La suma de la fila a de R[%d] es :%d\n", i ,R[i]);    
    }
    int min;
        min = b[0][0];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) {
                if(min > b[i][j]) {
                    min = b[i][j];
                }
            }
        }
    }
    printf("El minimo de b es :%d\n", min);
}

/**
 * 柚sensei的小知识:
 * 1.如果要求一个a[i][j]竖的话，
 *（横的话在第49行，如果想保持i不变，那就要在进入j循环之前定义sum），
 * 可以改变成a[j][i]，那样的话i保持不变，j会进入循环，之后才会改变i.
 * 2.如果想求一个sub matriz(00，10，11，20, i = j， i < j),
 * 那就可以用判断if(i == j || i > j).
*/