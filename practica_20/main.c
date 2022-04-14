#include <stdio.h>
#include<string.h>
/*int sum(int, int);

//传参
int main() {
    int a = 1;
    int b = 2;
    int newNumber = sum(a, b);
    printf("c = %d", newNumber);

    return 0;
}

int sum(int diyigeshu, int diergeshu) {
    int c = diyigeshu + diergeshu;
    return c;
}*/
int main (void) {
    //char password[6][6] = {"a","b", "c", "d", "e", "f"};
    char password[6][6] = {"abcdef"};
    char searchNum2[6];
    int i = 0;
    while( i < 3) {
        printf("请输入您的密码: \n");
        scanf("%s", searchNum2);
        if(strcmp(searchNum2, (*password)) == 0){
            printf("密码正确!");
            break;
        }else {
            printf("您输入的密码错误，还剩下%d次机会" ,3 - i -1);
            
        }
        i++;
    } 
}