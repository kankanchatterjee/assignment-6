#include<stdio.h>
#include<conio.h>
int main()
{
    int n,fact,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n,fact=1;i>=1;i--)
        fact=fact*i;
    printf("factorial is %d",fact);
    getch();
    return 0;
}

