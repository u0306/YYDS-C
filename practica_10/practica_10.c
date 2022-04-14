//
#include <stdio.h>
#include <stdbool.h>

/**
 * 函数bool() 
 * 判断 a 是否等于1
 * 如果等于1   说明true
 * 如果不等于1 说明false
*/
/*
bool YoN(int a) {
    if(a == 1) {
        return true;
    }
    return false;
}*/

/*
int main(void) {
    //传参 -> 传递数据
    //int a = 2;
    /*int b = 4 / 2;
    //y 空间存YoN的结果
    bool y = YoN(b);
    if(YoN(b)) {
        printf("True\n");
    }else {
        printf("False\n");
    }


    bool YesOrNo;
    YesOrNo = true;
    printf("%d", YesOrNo);
    if(YesOrNo){
    }                           //如果YesOrNo这个空间存的是True  进入if
    if(!=YesOrNo){}               //如果YesOrNo这个空间存的是False 进入if

    //例子1 - YesOrNo这个空间存的是True  进入if
    if(YesOrNo) {
        printf("520快乐.\n");
    }

    //如果YesOrNo这个空间存的是False 进入if
    if(!YesOrNo) {
        printf("False.\n");
    }
}*/

int main(void) {
    int a = 0;
    bool check;                  //Inicializacion

    if(a == 0) {
        check = true;
    }else{
        check = false;
    }

    //如果check这个空间存的是True  进入if
    if(check){
        printf("a = 0\n");
    }else{
        printf("a != 0\n");
    }

}
