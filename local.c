#include <stdio.h>
void sum();
int main()
{
    sum();
}
void sum()
{
    int a=5;
    a+=10;
    printf("%d",a);
}