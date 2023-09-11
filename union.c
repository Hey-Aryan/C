#include<stdio.h>


struct Demo
{      
    int i;              
    float f;        
    double d;   

};   //16

union Hello
{      
    int i;              
    float f;        
    double d;   

};   //8


int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of the structure is: %d\n",sizeof(dobj));
    printf("Size of the union is: %d\n",sizeof(hobj));


    return 0;
}