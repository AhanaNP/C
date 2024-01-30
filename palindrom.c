#include <stdio.h>

int main()
{
    int rev=0,n,dig,num;
    printf("Enter a number:\n");
    scanf("%d",&n);
    num=n;
    while(num !=0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num/=10;
    }

    if (n==rev)
    {
        printf("its a palindrom number");
    }else
    { 
        printf("not a palindrom number");
    }
}
