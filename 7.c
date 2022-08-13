#include<stdio.h>
#include<conio.h>
int main()
{
    int n,m,i;
    printf("enter a number");
    scanf("%d",&n);
    m=n;
    for(i=0;m;i++)
        m=m/10;
    printf("number of digits is %d",i);
    getch();
    return 0;
}

