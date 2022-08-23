#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if (num>0 || num==0)
    {
        printf("number is positive");
    }
    else
    {
       printf("number is negative"); 
    }
    getch();
}