#include "../header/functions.h"

void flipSequence(int count)
{

    int flipper =3 ^ 22;

    int prev=3;

    printf("\n[");

    while(count--)
    {
    printf(" %d ",prev);

    prev ^= flipper;

    }

    printf("]\n");
}

int getFibonaci(int n)
    {
        if(n==0 || n==1)
        {
            return 1;
        }
        else
        {
            return getFibonaci(n-1)+getFibonaci(n-2);
        }


    }

int printFibionaci(int n)

{
    int firstPrev=1,secondPrev=1;
    int i =0;
    printf("\n");
    for(i;i<n; i++)
    {

        int current;

        if( i==1 || i== 0)
        {
            current=1;
        }
        else
        {
            current=secondPrev+firstPrev;
            secondPrev=firstPrev;
            firstPrev=current;
        }
        printf("%d ",current);
    }
    printf("\n");
}

double getPower(double num,int exp)
{
    if(exp==0)
    {
        return 1;
    }
    else if (exp >0)
    {
        return num*getPower(num,exp-1);
    }
    else
    {
        return (1/num)*getPower(num,exp+1);
    }
}
