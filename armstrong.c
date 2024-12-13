#include<stdio.h>
int main()
{
    int n,sum=0,rem,temp;
    printf("enter the n value:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum)
    {
    printf(" is armstrong");
    }
    else
        printf(" %d  is not armstrong");
    return 0;
}
