#include<stdio.h>
int main(){
    float c,f;                        //定义浮点数c,f
    printf("input F:");               //
    scanf("%f",&f);                   //输入要转换的华氏度
    c=(f-32)/1.8;                     //转换公式
    printf("C:%.2f\n",c);            //输出求得的摄氏度，保留两位数字
}
