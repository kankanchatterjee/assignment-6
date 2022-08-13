#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2,sum=0;i<=2*n;i+=2)
        sum=sum+i;
    printf("sum is %d",sum);
    getch();
    return 0;
}

