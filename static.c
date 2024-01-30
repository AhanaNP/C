#include <stdio.h>

void sum();
int main()
{
    sum();
    sum();
}
void sum()
{
    static int a=5;
    a+=10;
    printf("%d\n",a);
}