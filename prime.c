#include <stdio.h>

int main()
{
    /*int rev=0,n,dig,num;
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
    }*/
    
   
  /*  int n,i,flag=0;
    printf("enter a number: \n");
    scanf("%d",&n);
    if (n==0||n==1)
    flag=1;
    
    for(i=2; i<=n/2; ++i)
    {
     if(n%i==0){
         flag=1;
         break;
     }   
    }
    if(flag==0){
    printf("%d is a prime no");
    }else{
        printf("%d is not a prime no");
    }*/
    
    int num,digit,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("%d sum of these numbers",sum);
    
    return 0;
}
