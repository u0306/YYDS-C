#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED

#define HOTEL1 872.0    //各家酒店的默认房费
#define HOTEL2 1838.0 
#define HOTEL3 789.0 
#define HOTEL4 1658.0
#define DISCOUNT 0.95   //折扣率
//菜单函数：显示菜单选项，接受并返回用户的输入
int menu(void);
//返回预定的天数
int getnights(void);
//根据入住的天数计算最后需要支付的价格
void showPrice(int, int);


#endif//MYHEADER_H_INCLUDED