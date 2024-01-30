#include <stdio.h>
int main()
{
    int a,b;
    printf("Before swapping..\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping:a=%d, b= %d",a,b);
    return 0;
}