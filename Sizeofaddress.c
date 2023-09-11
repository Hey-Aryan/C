#include<stdio.h>

int main()
{                      //Storage allocated   //Storage class
    char ch ='A';      //1 byte              //auto
    int i = 11;        //4 byte              //auto
    float f = 3.14;    //4 byte              //auto
    double d = 9.567;  //8 byte              //auto

    printf("Values from the variables are :\n");
    printf("%c\n",ch);
    printf("%d\n",i);
    printf("%f\n",f);
    printf("%lf\n",d);

    printf("Size of each variables\n");
    printf("Size od character : %d\n",sizeof(ch));
    printf("Size od interger : %d\n",sizeof(i));
    printf("Size od float : %d\n",sizeof(f));
    printf("Size od double : %d\n",sizeof(d));

    printf("Address of each variable\n");
    //%d (format specifier) address in int // %p address in hexadecimal
    printf("Address of ch : %d\n",&ch);
    printf("Address of i : %d\n",&i);
    printf("Address of f : %d\n",&f);
    printf("Address of d : %d\n",&d); 
    
    return 0;
}