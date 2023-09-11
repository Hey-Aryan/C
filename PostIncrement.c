#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 1,b;
    b = a++ + a++;
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}