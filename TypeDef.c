#include<stdio.h>

//typedef JUNA_NAW  NAWIN_NAW

typedef int INTERGER;

typedef unsigned long int ULONG;

struct Demo
{
    int a;
    int b;
};

typedef struct Demo DEMO;
typedef struct Demo *PDEMO;

int main()
{
    INTERGER i =10;     //int i = 10;
    ULONG j = 21;       //unsigned long int = 21;
    DEMO obj;           //struct Demo obj;
    PDEMO ptr = &obj:   //struct Demo *ptr = &obj;

}