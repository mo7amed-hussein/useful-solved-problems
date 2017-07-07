#include <stdio.h>
#include <stdlib.h>
#include "../header/functions.h"


int main()
{
    printf("Hello world!\n");

    //flipSequence(12);
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("%d ",getFibonaci(i));
    }
    printf("\n");
    printFibionaci(10);
    printf("\n");
    printf(" power of 2^4 is %lf ,and  2^-2 is %lf \n",getPower(2,4),getPower(2,-2));

    //echoReverse();

    int x=10,y=20;
    //printf("\nbinary of 8 is %d \n",dec2bin(8,1));
    printf("\n x= %d , y=%d \n",x,y);
    swapTemp(&x,&y);
    printf("\n x= %d , y=%d \n",x,y);

    int num[]={1,2,44,44,2,1};
    printArr(num,6);
    reverseArr(num,6);
    printArr(num,6);

    printf("min of num is %d \n",getMax(num,6));

    drawTri2(8);
    int cl[]={11,22,11,44,22,55,11,66,77};
    printArrWR(cl,9);

    printf("factorial of 2 is %d \n",fact(4));
    if(isArrMirrored(num,6)==1)
    {
    puts("it is mirrored");
    }
    else
    {
    puts("it is not mirrored");
    }

    printf("ones in 7 is %d \n",countOnes(7));

    return 0;
}
