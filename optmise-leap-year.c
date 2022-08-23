#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    int flag= 0;
    int leep =  (year%100==0 && year%400 != 0) ? 0 : (year % 4 ==0) ?  1: 0;
    leep ? printf("leep year"): printf("not a leep year");
}
