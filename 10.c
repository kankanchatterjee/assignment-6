#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,remainder,reverse=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        n=n/10;
        reverse=reverse*10+remainder;
    }
    printf("reverse is %d",reverse);
    getch();
    return 0;
}

