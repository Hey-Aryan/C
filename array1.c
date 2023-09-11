//3 ways to create arrays
#include<stdio.h>

int main()
{
    //First way to initialise the array
    int Arr[4] = {10,20,30,40};   //Member Initialisation list 

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);

    printf("%d\n",Arr);

    //Second way to initalise the array
    int Brr[] = {10,20,30,40};   //Member Initialisation List without 
    


    //Third way to initialise the array
    int Crr[4];       //Member by Member Initalisation List
    Crr[0]= 10;
    Crr[1]= 20;
    Crr[2]= 30;
    Crr[3]= 40;

    return 0;
}