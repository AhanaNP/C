#include <stdio.h>
int a=5;
void sum();
int main()
{
    sum();
}
void sum()
{
    a+=10;
    printf("%d",a);
}