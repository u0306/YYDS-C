#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/**
 * 圆: s = PI * r *r;
 * 矩形: s = width * height;
 * 三角形 s = width *height / 2;
 */
//根据传入的半径，返回圆的面积
double calcCircle(double);
//对用户的输入进行非负验证/让用户输入正确的值/拿到用户输入的正确值
int validate(double);   //验证用户输入的double类型数据是否为正数
//double input();     //函数内直接让用户输入，如果不符合要求就重新录入，返回录入正确的数字
double calcRectangle(double, double);
double calcTriangle(double, double);
int main() {

    //1. 用户输入的必须为正数
    //2. 打印面积
    double radius;
    double s;
    double width,height;
    int choice;
    printf("1. 圆的面积\n");
    printf("2. 矩形的面积\n");
    printf("3. 三角形的面积\n");
    printf("本系统支持计算三种图形的面积, 请选择:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("请输入圆的半径,我来计算圆的面积: ");
        do {
            scanf("%lf",&radius);
            if(!validate(radius)) { //如果没有通过验证，就打印一句提示
                printf("所录入内容不能为负数, 请重新输入一个正数 ");
            }
        }while (!validate(radius));
            s = calcCircle(radius);//调用计算圆面积的方法
            printf("圆的面积为: %.2lf\n",s);
        break;
    case 2:
        printf("请输入矩形的宽和高,我来计算矩形的面积: ");
        do {
            scanf("%lf%lf", &width, &height);
            if(!validate(width) || !validate(height)) {
                printf("所录入内容不能为负数, 请重新输入一个正数 ");
            }
        }while(!validate(width) || !validate(height));
        //验证通过之后，调用方法计算图形的面积
        s = calcRectangle(width, height);
        break;
    case 3:
        printf("请输入三角形的宽和高,我来计算三角形的面积: ");
        do {
            scanf("%lf%lf", &width, &height);
            if(!validate(width) || !validate(height)) {
                printf("所录入内容不能为负数, 请重新输入一个正数 ");
            }
        }while(!validate(width) || !validate(height));
        s = calcTriangle(width, height);
        break;
    
    default:
        printf("本系统只支持计算三种图形的面积！ 请重新选择:");
    }
    printf("图形的面积为:%.2lf \n", s);
    //在函数中实现的是 各图像的计算过程
    return 0;
}
double calcCircle(double radius) {
    //pow函数可以自己定义
    double s = 3.14 * pow(radius, 2);
    //返回计算好的面积
}
//验证用户输入的double类型数据是否为正数
int validate(double num) {
    return num > 0 ;    //如果num > 0,会返回一个非零值，表示真
}

double calcRectangle(double width, double height) {
    return width * height;
}

double calcTriangle(double width, double height) {
    return width * height / 2;
}