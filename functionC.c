#include <stdio.h>
void sum();
int main()
{
   printf("sum of 2 numbers.\n");
   sum();
}
void sum(){
int num1,num2,c;
printf("enter 2 numbers:\n");
scanf("%d%d",&num1,&num2);
c=num1+num2;
printf("sum of the enterd numbers:%d",c);
    return 0;
}
