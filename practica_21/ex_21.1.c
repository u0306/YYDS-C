#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 5
//书写一个小型的学生成绩管理系统
//录入函数
void input(double []);
void sort(double []);
void show(double []);
int find(double *, int findNum);

int main() {
    double scores[N];
    double findNum;
    //1.录入
    input(scores);
    //2.排序
    printf("排序前: \n");
    show(scores);
    sort(scores);
    printf("排序后: \n");
    //3.按照某种格式打印
    show(scores);

    printf("请输入要查找的数字: ");
    scanf("%lf", &findNum);
    printf("找到的数字下标为: %d\n",find(scores, findNum));
    return 0;
}

int find(double *scores, int findNum) {
    int findIndex = -1;
    for(int i = 0; i < N; i++) {
        if(findNum == *(scores + i)) {
            findIndex = i;
            break;
        }
    }
    return findIndex;
}
void input(double score[]) {
    for(int i = 0; i < N; i++) {
        printf("请输入第%d门课的成绩: ", i + 1);
        scanf("%lf", &score[i]);
        //scanf("%lf",(score + i));
    }
}

void sort(double scores[]) {
    double temp;
    for(int i = 0; i < N -1; i++) {
        for(int j = 0; j < N - i -1; j++) {
            if(scores[j] > scores[j + 1]) {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
}

void show(double scores[]) {
    printf("******************************************\n");
    printf("语文\t数学\t英语\t物理\t化学\n");
    for(int i = 0; i < N; i++) {
        printf("%.2lf\t",*(scores + i));
    }
    printf("\n");
    printf("******************************************\n");
}