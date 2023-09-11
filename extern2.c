#include<stdio.h>

//Initalised global vriable
int No1 = 11;

//Non Initialised static global variable 
int No2;

//Initialised static global variable
static int B;

//Function Defination
void Demo()
{
    int x = 10;
    static int Y = 20;
    printf("Inside Demo\n");
}

//Non initialised global
//BSS : Block Starting with Symbol

//Initialised global
//Non Bss : Block Starting with value
