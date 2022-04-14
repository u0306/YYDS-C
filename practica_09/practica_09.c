/**
 * Use for
 * ask to user two arrays's size 
 * check size 
 * realize the sum of two arrays
 * */ 
#include <stdio.h>
#include <string.h>

int main (void) {
    int x;
    int y;
    
    printf("Los espacios de 2 arrays son(array1, array2):\n");
    scanf("%d %d", &x, &y);
    
    int n[x];
    int n1[y];

    for(int i = 0; i < x; i++){
        printf("El n[%d] es:",i);
        scanf("%d", &n[i]);
    }
    for(int i = 0; i < y; i++){
        printf("El n1[%d] es:",i);
        scanf("%d", &n1[i]);
    }
    int size = sizeof(n)/sizeof(n[0]);
    int size1 = sizeof(n1)/sizeof(n[0]);
    /*printf("size = %d",size);
    printf("size = %d",size1);*/
    if (size == size1) {
        printf("Tienen los mismos espacios\n");
        int R[size];
        for(int i = 0; i < x; i++) {
            int sum = 0;
            sum = n[i] + n1[i];
            R[i]= sum;
        }  
        for(int i = 0; i < size; i++) {
            printf("R[%d] es:%d\n", i, R[i]);
        } 
    }else {
        printf("No tienen los mismos espacios\n");
    }
} 

