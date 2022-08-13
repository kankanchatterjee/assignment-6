#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
        printf("not a prime");
            break;
        }
    }
    if(i==n)
        printf("prime");
    else if(n==1)
        printf("neither prime nor composite");
    getch();
    return 0;
}

