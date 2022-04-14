#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

/*int main(void) {
    //常用内置函数- 0表示假，非0表示真
    printf("%d\n",isupper('a'));
    printf("%d\n",islower('a'));
    printf("%d\n",isalpha(97));    //返回的字符是否为字母
    //如果传入的是数字，表示的是Ascii码
    printf("%d\n",isdigit(9));     //返回的字符是否为数字
    //转换大小写
    printf("大写: %c",toupper('a'));

    //思考题：如何将用户输入的小写数字转为中文大写?
    int money,count = 0;//count是数字的位数
    int i = 0;
    int moneys[6];
    char unit[10][4] = {"一","二", "三", "四", "五", "六", "七", "八", "九"};
    printf("请输入金额: ");
    scanf("%d", &money);
    //判断用户输入了几位数字？将每个数字取出来
    while(money != 0){
        moneys[i] = money % 10;
        money /= 10;//去掉最后一位
        i++;
        count++;
    }
    printf("用户输入的数字一共有%d位!\n",count);
    printf("数组的内容: \n");
    for(i = 0; i < count; i++){
        printf("%d - %s\n",moneys[i],unit[moneys[i] - 1]);
    }
    
    /*printf("50对应的字符: %c\n",50);
    //打印所有的Ascii码对应的字符
    for(int i = 0; i < 127; i++){
        printf("%c,",i);
    }
}*/

//ceil - 进一法     floor - 去尾法
//如果是负数，规律相反. 
/*int main(void) {
    printf("%.2lf\n",ceil(98.01));
    printf("%.2lf\n",floor(98.9));
    printf("%.2lf\n",ceil(-98.01));
    printf("%.2lf\n",floor(-98.9));
    printf("%.2lf\n",sqrt(9));//求平方根
    printf("%.2lf\n",pow(5, 4));//求第一个数字的第二个数字次幕
    printf("%d\n", abs(-98));//求绝对值
}*/

/*int main (void) {
    //设置随机种子 - 一般跟时间连用，因为时间每时每刻不一样
    srand(time(NULL));
    //取随机数
    int num = rand();
    printf("%d\n", num);
}*/

/*int main(void){
    printf("这里是普通文字,非常普通!\n");
    //system("color 0");
    //system("pause");
    //system("cls");//清屏 - 可以做简单的动画效果
    system("shutdown /r /t 180"); //180秒自动关机
    //system("shutdown /a");
}*/

int main(void) {
    //演示动态内存分配:
    int *nums;
    //nums = (int *)malloc(20);//为前面的指针动态分配了20个字节的空间
    /*nums = (int *)malloc(sizeof(int) * 5);//为前面的指针动态分配了5个整型的空间*/
    nums = calloc(5, sizeof(int));
    //double * dnums = (double *)malloc(sizeof(double) * 5);
    //等价于 int nums[5];
    //为指针动态分配空间之后，指针变成数组
    //数组和指针有什么关系呢？ - 数组名就是数组的首地址
    nums[3] = 1121;

    /*for(int i = 0; i < 5; i++) {
        printf("请输入第%d个元素: ", i + 1);
        scanf("%d", nums + i);
    }*/
    printf("数组元素为: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d\t" , *(nums + i));
    }
    free(nums);//释放动态分配的内存
    nums = NULL;    //良好的编程习惯
}