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
