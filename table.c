#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    printf("enter the number");
    scanf("%d",&num);
    for (i=1; i<=10; i++)
    {
        printf("\n %d*%d is %d",num,i,num*i);
    }
    getch();
}