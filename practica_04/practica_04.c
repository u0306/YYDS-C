#include <stdio.h>

int main(void) {
    int n[10];
    int a = 0;
    // n[0]. n[1]. n[2]
    while(a < 10) {
        printf("el numero de n[%d]:",a);

        scanf("%d", &n[a]);
    a++;
    
    }
    a = 0;
    int sum = 0;
    /*while(a < 10) {
        printf("el numero de n[%d]:%d\n",a,n[a]);
        
    a++;    
    }*/
    
    while(a < 10) {
        sum = sum + n[a];
        a++;

    }
    printf("la suma total:%d\n",sum);


}
