#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,k;
    printf("Enter a Number");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 1;
}