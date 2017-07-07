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

void echoReverse()
{
    char ch;
    ch=getchar();
    if(ch != '\n')
    {
        echoReverse();
    }
    putchar(ch);
}

int dec2bin(int num ,int r)
{
    int ret=0;

    if(num/2 !=0)
    {
        ret=dec2bin(num/2,r*10);
    }
    if(num%2==1)
    {
        return r+ret;
    }
    return ret;
}

void swapXor(int *x,int* y)
{
    (*x)=(*x)^(*y);
    (*y)=(*x)^(*y);
    (*x)=(*x)^(*y);
}

void swapAS(int *x,int* y)
{
    (*x)=(*x)+(*y);
    (*y)=(*x)-(*y);
    (*x)=(*x)-(*y);
}

void swapTemp(int *x,int* y)
{
    int temp=(*x);
    (*x)=(*y);
    (*y)=temp;
}

 void printArr(int arr[],int l)
 {
    int i=0;
    printf("\n[ ");
    for(i; i<l; i++)
    {
        printf("%d ",arr[i]);
    }
    printf(" ]\n");
}

void reverseArr(int arr[],int l)
{
    int i=0;
    for(i; i<l/2; i++)
    {
        int tmp=arr[i];
        arr[i]=arr[l-1-i];
        arr[l-1-i]=tmp;
    }
}

int getMin(int arr[],int l)
{
    int min=arr[0];
    int i=0;
    for(i; i<l; i++)
    {
        if(arr[i]<min)
        {
            min =arr[i];
        }
    }
    return min;
}

int getMax(int arr[],int l)
{
    int max=arr[0];
    int i=0;
    for(i; i<l; i++)
    {
        if(arr[i]>max)
        {
            max =arr[i];
        }
    }
    return max;
}

void drawTri1(int h)

{
    int i=0;
    printf("\n");

    for(i=1;i<=h; i++)
    {
        printf("\n");
        int c=i;
        while(c--)
        {
            printf("* ");
        }
    }

    for(i=h-1;i>0; i--)
    {
        printf("\n");
        int c=i;
        while(c--)
        {
            printf("* ");
        }
    }

}

void drawTri2(int h)
{
    int i=0;
    printf("\n");

    for(i=1; i<=h; i++)
    {
        int spaces=h-i;
        while(spaces--)
        {
            printf("  ");
        }
        int stars=2*i-1;
        while(stars--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void printArrWR(int arr[],int l)
{
    int i=0,j=0,isRepeated;
    printf("\n[ ");

    for(i; i<l; i++)
    {
        isRepeated=0;

        for(j=i-1; j>=0 ; j--)
        {
            if(arr[i]==arr[j])
            {
                isRepeated=1;
            }
        }
        if(isRepeated==0)
        {
            printf("%d ",arr[i]);
        }

    }
    printf(" ]\n");
}

int fact(int num)
{
    if(num==0 || num==1)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}

