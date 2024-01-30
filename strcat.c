#include <stdio.h>
#include <string.h>
int main()
{
    char x[4]={'h','a','i','\0'};
    char y[]="world";
    strcat(x,y);
    printf("The first string is : %s",x);
    return 0;
}