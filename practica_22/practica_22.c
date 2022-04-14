#include<stdio.h>
#include "hotel.h"

extern char hotelNames[4][50];

int main() {

    int choice;
    //用户输入入住的酒店和天数，程序计算出对应的金额
    //1.显示菜单 - 封装成函数
    choice = menu();
    if(choice > 0 && choice < 5) {
        printf("当前用户选择的是: %s\n", hotelNames[choice - 1]);
            //2.确认天数
        int days;
        days = getnights();
        printf("当前用户选择的天数是: %d\n", days);    
        //3.计算过程
        showPrice(choice, days);
        
    } else {
        printf("您选择错误即将退出程序!\n");
        return 0;
    }
    return 0;
}