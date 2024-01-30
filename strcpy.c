#include <stdio.h>
#include <string.h>
int main()
{
    char x[4]="hai";
    char y[4];
    strcpy(y,x);
    printf("Y string is : %s",y);
    return 0;
}