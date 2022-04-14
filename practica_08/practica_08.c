// usar for como while 
#include <stdio.h>

int main(void) {
    int x;
    printf("El espacio que quiere reservar es:");
    scanf("%d",&x);
    int n[x];
    for(int i = 0; i < x; i++) {
        printf("el n[%d]es:",i);
        scanf("%d",&n[i]);
    }
    for(int j = 0; j < x; j++) {
        printf("El n[%d] es:%d\n",j,n[j]);
    
    }
}
