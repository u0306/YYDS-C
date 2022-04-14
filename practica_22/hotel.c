//对应hotel.h的实现文件
#include<stdio.h>
#include "hotel.h"

char hotelNames[4][50] = {"贝罗酒店", "香榭丽舍广场酒店", "阿斯图里亚斯特拉奥佩拉酒店", "斯克里布索菲特酒店"};

int menu(void) {
    int choice;
    printf("请选择入住的酒店\n");
    for(int i = 0; i < 4; i++) {
        printf("%d,%s\n", i + 1, hotelNames[i]);
    }
    printf("5.退出\n");
    printf("请输入您的选择: ");
    scanf("%d", &choice);
    return choice;
}

int getnights(void) {
    int days;     
    printf("请您选择的当前酒店需要居住的天数：");
    scanf("%d", &days);
    return days;
}

void showPrice(int hotelNum, int nights) {
//   int hotelNum = menu();
    float hotelPrice;
   /* if(hotelNum == 1) {
        hotelPrice = HOTEL1;
      // 那么我的hotelPrice值 将会等于hotel1的值
    } else if(hotelNum == 2) {
        hotelPrice = HOTEL2;
    } else if(hotelNum == 3) {
        hotelPrice = HOTEL3;
    } else { 
        hotelPrice = HOTEL4;
    }*/
    switch (hotelNum) {
        case 1: 
            hotelPrice = HOTEL1;
        break; 
        case 2: 
            hotelPrice = HOTEL2;
        break; 
        case 3: 
            hotelPrice = HOTEL3;
        break; 
        case 4: 
            hotelPrice = HOTEL4;
        break; 

    }
    int prices = hotelPrice * nights;
    printf("您选择酒店的天数价格总数为:%d\n", prices);
}