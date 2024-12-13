#include<stdio.h>
void main()
{
    int n,rem,rev=0;
    printf("enter the  n value:");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n % 10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("the reverse of a number %d\n",rev);
}
