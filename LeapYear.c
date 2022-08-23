#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    int flag= 0;;
    int i=2;
    int centYear= year;
    while (i--)
    {
        if( (centYear%10) == 0){
            flag++;
        }
      centYear/10;
    }
    if(flag == 2 && year% 400 != 0 ){
        printf(" not a leap year");
        return 0;
    }
    else if(year%4==0 ){
        printf("leap year");
        return 0;
    }
    else{
    printf("not a leap year:");
    }
   return 0;
    getch();
}