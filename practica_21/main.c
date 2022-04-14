#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*int factorial(int num) {
    if(num == 1)
    return 1;
    else {
        num = num * factorial(num - 1);
        return num;
    }
}

int main() {
    int result = factorial(5);
    printf("resultado: %d", result);
}*/
/*int main() {
    int count = 0;
    do {
        int count = 0;
        count ++;
        printf("count = %d", count);
        count++;
    }while(++count < 5);//外部的count
    //while(++count1 < 5) ==> count++;  while(count1 < 5);
    //while(count1++ < 5) ==> while(count1 < 5);  count++;  
    return 0;
}*/

/*void changeNUm() {
    int num1 = 5;int num2 = 8;
    num1 = 55;
    num2 = 288;
    printf("num1 = %d\tnum2=%d\n", num1, num2);
}

int main() {
    int num1 = 5, num2 = 8;
    changeNUm();
    printf("num1 = %d\tnum2 = %d\n", num1, num2);
    return 0;
}*/

/*int * changeNUm() {
    int num1 = 5;int num2 = 8;
    num1 = 55;
    num2 = 288;
    int nums[] = {1, 2, 3, 4, 5};
    //函数执行完毕时，会自动销毁函数内部定义的变量
    return nums;
}

int main() {
    
    int * nums = changeNUm();
    for(int i = 0; i < 5;i++) {
        printf("%d\n",*(nums + i));
    }
    return 0;
}*/

/*int count;  //全局变量-有默认值
void changeNum() {
    count++;
}
int main() {
    changeNum();
    changeNum();
    changeNum();
    changeNum();
    printf("count = %d\n",count);
    
    return 0;
}*/

/*int counter();

int counter() {
    static int count = 0;//第一次执行会分配空间，之后就不会再分配空间-本句只会执行一次
    count++;
    return count;
}

int main() {
    int count = 0;
    counter();
    counter();
    counter();
    count = counter();
    printf("count = %d ", count);
}*/
/*int whilecount = 0;

extern int whilecount;
void counter(int);

void counter(int i){
    static int subtotal = 0;
    subtotal++;
    printf("counter函数被调用了%d次\n", subtotal);
    printf("当前是while的第%d轮",whilecount);
    return;
}


int main() {
    int value;
    register int i;
    printf("请输入循环执行的次数(按0退出): ");
    while(scanf("%d", &value) == 1 && value > 0) {
        whilecount++;
        for(i = value; i >= 0; i--){
            counter(i);
        }
        //printf("");
    } 
}*/

/*void change(int);

int main() {
    int num = 9;
    change(num);
    printf("num = %d\n",num);
}

void change(int num) {
    num++;
    printf("num = %d\n",num);
}*/

void change(int *);

int main() {
    int num = 9;
    change(&num);
    printf("num = %d\n",num);
}

void change(int *num) {
    *num += 1;
}
