#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
   if(iNo % 2 == 0)
   {
       return true;
   }
   else
   {
      return false;
   }
}

int main()
{
    int iValue =0;
    int bRet=0;

    printf("Enter one number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("It is an even number\n");
    }
    else
    {
        printf("It is an odd number\n");
    }
    return 0;
}
