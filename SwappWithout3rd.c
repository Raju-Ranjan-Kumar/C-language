#include<stdio.h>
#include<conio.h>
void main()
{
    int var1,var2;
    printf(" \n Enter the value bafore swapping for var1 ");
    scanf("%d",&var1);
    printf(" \n Enter the value bafore swapping for var2 ");
    scanf("%d",&var2);
       var1=var1+var2;
       var2=var1-var2;
       var1=var1-var2;
    printf("\n after swapping var1 is %d",var1);
    printf("\n after swapping var2 is %d",var2);
    getch();  
}