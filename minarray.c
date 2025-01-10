#include<stdio.h>
void main()
{
    int a[10],i,n,min;
    printf("enter size");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("the minimum element in the array %d",min);
}
