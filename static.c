#include<stdio.h>
void Demo()
{
     auto int A = 10; // auto
     A++;     //Increment the value by 1 //operator
     printf("Value from Demo is: %d\n",A);
     // no return value in void //function won't return but will do some work
}

void Hello()
{

    static int B = 10;
    B++; //Increment the value by 1
    printf("Value from Hello is %d\n",B);
}

int main()
{
     Demo();
     Demo();
     Demo();

     Hello();
     Hello();
     Hello();

    return 0;
}