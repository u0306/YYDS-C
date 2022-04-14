#include <stdio.h>
#include <stdlib.h>

/*int main(void) {
    int num = 9;
    int * ptr_num;
    ptr_num = &num;
    //指针的地址
    int * ptr_num2 = ptr_num;

    //%p 指针占位符     %x 16进制占位符
    printf("num变量的地址是: %p\n", ptr_num);
    printf("\n指针ptr_num的地址 : %p\n", ptr_num2);

    //使用指针修改变量值
    /*ptr_num = 9999;
    printf("*ptr_num对应的值为: %d\n", num);
}*/

int main(void) {
    int num1 = 1024;
    int num2 = 2048;
    int * ptr1;
    int * ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("num1的值是%d\tnum1的地址是: %p\n",num1,ptr1);
    printf("num2的值是%d\tnum1的地址是: %p\n",num2,ptr2);
    //将变量1的值，赋给变量2
    //num2 = num1; * ptr2 = * ptr1;
    ptr2 = ptr1;
    printf("重新赋值: \n");
    printf("num1的值是%d\tnum1的地址是: %p\n",num1,ptr1);
    printf("num2的值是%d\tnum1的地址是: %p\n",num2,ptr2);

    *ptr2 = 111111;
    printf("重新赋值: \n");
    printf("num1的值是%d\tnum1的地址是: %p\n",num1,ptr1);
    printf("num2的值是%d\tnum1的地址是: %p\n",num2,ptr2);
    int num = 10;
    int * ptr_num;
    ptr_num = &num;// * ptr_num => num
    printf("num的值是%d\tnum的地址是: %p\n",num,ptr_num);

    int * ptr_num2;
    ptr_num2 = ptr_num;//两个指针都指向了同一个内存
    *ptr_num2 = 99;//等价写法 num = 99;
    printf("重新赋值: \n");
    printf("num的值是%d\tnum2的地址是: %p\n",num,ptr_num2);
    printf("num的值是%d\tnum的地址是: %p\n",num,ptr_num);

}