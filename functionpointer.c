#include<stdio.h>

//Function Defination
void Fun()
{

    printf("Inside fun\n");
}

int main()
{
    Fun();   //Function CAll

    void (*fptr)();
    //fptr is a pointer which points to the function
    // that function accepts nothing
    //and that function returns nothing.

    fptr = Fun;

    fptr(); //call function pointer

    return 0;
}

