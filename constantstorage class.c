#include<stdio.h>

const int no1 = 10;   //BSS
const int no2;        //non BSS  //constant value = 0

int main()

{
    const int no3 = 10;   //auto
    const int no4;        //auto   //if you don't inilialised immediately then 
                          //constant variable gets garbage value which cannot be changed 
    int no3 = 11;

    return 0;
}