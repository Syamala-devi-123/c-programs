#include<stdio.h>
void main()
{
    int a[10],i,n,b[10];
    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;++i)
    {
        printf(" %d",b[i]);
    }
}
