#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
//函数原型
/*void calcCircle();  //计算圆面积
void calcRectangle();
int calcSum();      //偶数1-100的偶数相加*/
/**
 * 计算圆的面积(函数实现)
*/
/*void calcCircle() {
    double radius, s;//半径和面积
    printf("请输入圆的半径: ");
    scanf("%lf", &radius);
    //圆面积 = 3.14乘以半径的平方
    s = 3.14 * pow(radius, 2);
    printf("半径为%.2lf的圆面积为: %.2lf\n", radius , s);
}
void calcRectangle() {
    double width, height;   //矩形的宽和高
    double s;               //矩形的面积
    printf("请输入矩形的宽和高: \n");
    scanf("%lf%lf", &width, &height);
    s = width * height;
    printf("矩形的面积为: %.2lf", s);
}
int calcSum() {
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0)
        sum++;
    }
    //将计算好的结果返回
    printf("1 - 100之间的偶数和为: %d\n", sum);
    return sum;
}*/

/*int main(void) {
    calcCircle();//调用计算圆的面积函数
    calcRectangle();//调用计算矩形的面积函数
    int sum = calcSum();
}*/

//函数声明

//书写函数实现元素的查找，要求返回找到的元素下标
int search();
//书写函数实现冒泡排序并返回排序后的数组
void sort(int[5]);
//书写函数要求用户输入密码(6位，错误则重新输入), 返回并打印用户输入正确的密码
char * password();


int main(void) {
    int index = search();
    printf("\n找到的元素下标是: %d\n", index);
    int nums[5] = {34, 56, 78, 3 ,2};
    sort(nums);
    char * password();
    return 0;
}

int search() {

    int nums[] = {34, 56, 78, 3 ,2};
    //要查找的数字，所查找数字的下标，没找到index为-1
    int searchNum;
    int searchIndex = -1;
    printf("请输入要查找的整型数字: ");
    scanf("%d", &searchNum);
    for(int i = 0; i < 5; i++) {
        if(searchNum == *(nums + i)) {
            searchIndex = i;
            break;
        }
    }
    return searchIndex;
}

void sort(int nums[5]) {      
    int N = 5;
    //int nums[5] = {34, 56, 78, 3 ,2};
    int temp;
    for(int i = 0; i < N - 1; i++) {
        for(int j = 0; j < N - i - 1; j++){
            if(nums[j] < nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1]  = temp;
            }
        }
    }
    printf("\n排序后的结果: ");
    for(int i = 0; i < N; i++) {
        printf("%d\t", nums[i]);
    }
}

char * password() {

    //char password[6][6] = {"a","b", "c", "d", "e", "f"};
    char password[6][20] = {"abcdef"};
    char searchNum2[20];
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

