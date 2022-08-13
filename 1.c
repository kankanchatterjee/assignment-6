#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1,sum=0;i<=n;i++)
        sum=sum+i;
    printf("sum is %d",sum);
    getch();
    return 0;
}
