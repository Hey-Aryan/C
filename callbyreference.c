#include<stdio.h>

//call by value
void square(int n)
{
    n = n * n;
    printf("Square = %d\n",n);
}
//call by reference
void _square(int *n)
{
    *n = (*n) *(*n);
    printf("Square = %d\n",*n);
}

int main()
{
    int number = 4;

    square(number);
    printf("number = %d\n",number);
    
    
    _square(&number);    //function is changing the local variable initialised value  
    printf("number = %d\n",number);
    

    return 0;
}