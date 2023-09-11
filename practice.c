//Will the address output be same ?

#include<stdio.h>

int main()
{
    int n = 4;

    printf("%d\n",&n);
    printAddress(n);     //function call by value

    return 0;
}

void printAddress(int n)
{
    printf("%d\n",&n);
}

// ans : NO
// As this is a call by value a copy of int n is formed in the function and that address is printed
// and not the address allocated to int n in main function

/*
#include<stdio.h>

int main()
{
    int n = 4;

    printf("%d\n",&n);
    printAddress(&n);     //call by reference

    return 0;
}

void printAddress(int *n)
{
    printf("%d\n",n);
}
*/