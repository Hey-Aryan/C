#include<stdio.h>

//Structure Declaration
// There is no memory allocated at this point
struct Demo 
{

    int i;       //4
    float f;     //4
    int j;       //4 
    double d;    //8
};

int main()
{ 
    int no;    // defination without initialisation
    int X =0;  // defination without initialisation
    // extern sodun sagale defination ahe 
    //only extern declaration ahe


    //structure object/variable creation 
    // memory gets allocated at this point
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    //Member Initialisatin 
    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51;
  
    printf("Size of obj1 is : %d\n",sizeof(obj1));  //20
    printf("Size of obj1 is : %d\n",sizeof(obj2)); //20
    printf("i of obj2 is is : %d\n",obj2.i);       //21


    return 0;
}



//There are two ways 
struct Demo
{

    int no;
    int i;
}obj1,obj2,obj3;       //first way


struct Demo
{

    int no;
    int i;
};  
struct Demo obj1; // second way
struct Demo obj2;
struct Demo obj3;