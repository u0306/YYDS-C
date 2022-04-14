#include<stdio.h>
#define N 8

/*int main(void) {
    int array[] = {15, 20, 25, 30, 35};
    int * ptr_array;
    ptr_array = &array[0];
    //赋值之后就可以使用指针访问数组
    for(int i = 0; i < 5; i++){
        //printf("第%d个元素的值为%d\t地址为:%p\n", i, ptr_array[i], &ptr_array[i]);
        //printf("第%d个元素的值为%d\t地址为:%p\n", i, * (ptr_array + i), ptr_array + i);
        printf("第%d个元素的值为%d\t地址为:%p\n", i, *ptr_array, ptr_array);
        ptr_array++;
    }
}*/

/*int main(void){
    int array[N] = {15, 20, 25, 30, 35};
    int temp;
    for(int i = 0; i < N / 2; i++){
        //第i个值和第N-i-1个值互相交换
        temp = array[i];
        array[i] = array[N - i - 1];
        array[N - i - 1] = temp;
    }
    for(int i = 0; i < N; i++){
        printf("%d\t", *(array + i));
    }
    printf("\n");
}*/

/*int main(void){
    int array[N] = {15, 20, 25, 30, 35};
    int temp; 
    int * ptr_array_start;
    ptr_array_start = &array[0];
    int * ptr_array_end;
    ptr_array_end = array + N -1;//或者 array + 4, 因为一共有5个.array[4] N-1或 array[N - 1]
    while(ptr_array_start != ptr_array_end){
        temp = * ptr_array_start;
        * ptr_array_start = * ptr_array_end;
        * ptr_array_end = temp;
        //首元素指针要向后移动
        ptr_array_start++;
        //末元素指针要向后移动;
        ptr_array_end--;
    }
    for(int i = 0; i < N; i++){
        printf("%d\t", *(array + i));
    }
    printf("\n");
}*/

/*int main(void){
    int array[N] = {15, 20, 25, 30, 35, 45, 50, 60};
    int temp; 
    int * ptr_array_start;
    ptr_array_start = &array[0];
    int * ptr_array_end;
    ptr_array_end = array + N -1;//或者 array + 4, 因为一共有5个.array[4] N-1或 array[N - 1]
    for(int i = 0; i < N /2; i++){
        temp = * ptr_array_start;
        * ptr_array_start = * ptr_array_end;
        * ptr_array_end = temp;
        //首元素指针要向后移动
        ptr_array_start++;
        //末元素指针要向后移动;
        ptr_array_end--;
        
    }
    for(int i = 0; i < N ; i++){
        printf("%d\t", *(array + i));
    }
    printf("\n");
}*/
int main(void) {
    double score[5][3] = {
        {55, 66, 77},
        {52, 62, 72},
        {15, 26, 37},
        {54, 65, 76},
        {55, 66, 77},
    };
    //double * ptr_score = score;
    double (* ptr_score)[3] = score;
    /*double (* ptr_score)[3];
    ptr_score = score;*/    //数组名本身就是数组的首地址 所以不需要取值
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            //printf("%.2lf\t",score[i][j]);    //score[i] => *(score[i] + j)
            //printf("%.2lf\t",* (score[i] + j));
            //printf("%.2lf\t",*(*(score + i) + j));
            printf("%.2lf\t",*(*(ptr_score + i) + j));
        }
    }
    printf("\n");
}