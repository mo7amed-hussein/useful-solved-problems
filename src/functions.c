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
