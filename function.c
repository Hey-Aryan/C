#include<stdio.h>

int Addition(int iValue1, int iValue2)  // Dukan [[[called function is defined here]]] 
{
    int iOutput = 0;


    iOutput = iValue1 + iValue2;

    return iOutput;
}

int main()  //Ghar
{
    int iNo1 = 10;          //Variables names should be different so as to avoid ambiguity
    int iNo2 = 11;
    int iAns = 0;

    iAns = Addition(iNo1,iNo2);   //from this line directly proccess goes to 
    //line 4 // [[[ function call ]]]


    printf("addition is : %d\n",iAns);

    return 0;
}