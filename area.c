#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float s,area;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of a triangle %f",area);
}
