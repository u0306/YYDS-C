// Tema estructura
#include <stdio.h>
#include <string.h>

// int, char, float
/* 一个人的银行里
 * 1. 卡的主人  //char
 * 2. 卡的存款  //float
 * 3. 卡的账号  //char[16]
 */ //Tarjeta

//sizeof 代表一个空间的大小

int main(void) {

    // 定义构造类型
    typedef struct
    {
        char nombre[20];
        float saldo;
        char cuenta[16];  
    }Tarjeta;

    Tarjeta usuario1;

    printf("用户，请输入您的名字:");
    scanf("%s", usuario1.nombre);
    printf("%s 用户，你好，欢迎来到我们的xx银行.\n", usuario1.nombre);
    
    printf("用户，输入您的卡号(必须是16位数):");
    scanf("%s",usuario1.cuenta);
    int len = strlen(usuario1.cuenta);
    //printf("len = %d", len);
    if(len < 16 || len > 16) {
        printf("Error.\n");
    }else {
        printf("您的卡号是:%s",usuario1.cuenta);
        printf("\n输入正确");
        usuario1.saldo = 100;
        //printf("用户，您所剩的金额是:");
        printf("\n您的金额是: %.2f.\n",usuario1.saldo);
    }
    printf("您的查询到此结束，欢迎下次使用.\n");
}

/**
 * 总结:
 * 1. 使用typeef struct
 *    使用方式:  typedef struct
                {
                    char nombre[20];
                    float saldo;
                    char cuenta[16];    
                }Tarjeta;                   //这里是数据结构名字

                Tarjeta usuario1;           //用数据结构定义的空间
                Tclientes cliente[3];       //这里有三个用户，用数组来定义

 * 2. 如何调用变量
                usuario1.nombre = "";       //变量名.变量     
                cliente[0].nombre = "";     //数组.变量

 * 3. 课外知识
 *              sizeof()                    //变量的空间    
 *                                          //如果为定义a[10],但是我只输入a，大小还是10
 *              strlen()                    //变量的大小
 *                                          //如果为定义a[10],但是我只输入a，大小还是1

 * 4. len                                   //当你想知道一个变量的大小
 * 5.#include <string.h>                    //strlen()的头文件
*/