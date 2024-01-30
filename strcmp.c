#include <stdio.h>
#include <string.h>
int main()
{
    char x[5]="hello";
    char y[5]="world";
    int result= strcmp(x,y);
    if(result==0){
    printf("stings are equal");
    }
    else{
    ("string are not equal");
    }
    printf("%s",result);
    return 0;
}