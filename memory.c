#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];  //Static memory allocation

    int *p = NULL;

    p =(int *)malloc(sizeof(int)*5);

    //Use the memory   //what to do here [[Logic Building]]

    free(p);

    //code

    return 0; //memory of Arr gets deallocated at this point
}