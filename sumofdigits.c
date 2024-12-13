#include<stdio.h>
void main()
{
    int n,sum=0,rem;
    printf("enter the  n value:");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n % 10;
        sum=sum+rem;
        n=n/10;
    }
    printf("the sum of the digits %d\n",sum);
}
