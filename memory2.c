#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int*Arr = NULL;

    printf("Enter size of array\n");
    scanf("%d",&size);

    Arr = (int *)malloc(sizeof (int)*size);          //allocate the memory

    //Use the memory                                //Use the meomry

    free(Arr);                                      // free the memory

    return 0; 
}