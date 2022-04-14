#include<stdio.h>

int main(void) {
    double score[] = {98,87,65,43,76};
    double * ptr_score;
    ptr_score = &score[0];
    printf("double型数组的地址占%ld个字节\n",sizeof(ptr_score));
    printf("数组的首地址: %p\t数组首元素的地址: %p\n",score,&score[0]);
    for(int i = 0; i < 5; i++){
        //printf("%.2lf\n", ptr_score[i]);
        printf("%.2lf\n",* (ptr_score + i));
        //printf("%.2lf\n",* ptr_score++);
    }
    //假设我们希望再次打印数组的每个元素
    printf("****************\n");
    for(int i = 0; i < 5; i++){
        //printf("%.2lf\n", ptr_score[i]);
        printf("%.2lf\n",* (ptr_score + i));
        //printf("%.2lf\n",* ptr_score++);
    }
    //如果要用第三种打印方法要重置指针
    //ptr_score = score;
    /*ptr_score = &score[1];
    ptr_score += 2;
    printf("%.2lf\n",* ptr_score);
    ptr_score -= 3;
    printf("%.2lf\n",* ptr_score);*/
}
// int num[50];// num是数组名，也是数组首地址
// num的值与&num[0]的值是相同的
/* 数组第i + 1个元素可表示为:
    第i + 1个元素的地址: &num[i]或 * num + i
    第i + 1个元素的值 : num[i] 或 * (num + i)*/
/*为指向数组的指针赋值 :
    int * ptr_num = num;或者 int *ptr_num = &num[0];*/
/*指针变量可以指向数组的元素
    int *ptr_num = &num[4];或 int * ptr_num = num + 4;*/



    