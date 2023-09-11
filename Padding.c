#include<stdio.h>
#pragma pack (1)       // 1 2 4 8 16 
//This allocated the memory in 1 byte 

struct Demo
{               //theory       // Actually
               //allocated    // allocated
    int i;     //4           //4
    char ch1;  //1           //4
    float f;   //4           //4
    char ch;   //1           //4
    float d;   //4           //4

};    // Expected memory allocated = 14
     // Actually memory allocated = 20

int main()
{
    struct Demo dobj;

    printf("Size of the structure is: %d\n",sizeof(dobj));

    return 0;
}