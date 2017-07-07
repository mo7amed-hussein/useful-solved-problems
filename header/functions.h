
#ifndef _FUNTIONS_
#define _FUNTIONS_

    /**
    *function to print the following sequences 22,3,22,3,22,3,22,3,....
    *some callled it flip flop sequence ,it can be applied to any two sequences
    *@param int count  the sequence length
    */
    void flipSequence(int count);

    /**
    *generate nth a fibonaci sequence
    *@param int n  nth
    *@return int  nth fibonaci sequence
    */
    int getFibonaci(int n);

    /**
    *print fibonaci sequence
    *it doesn't depend on the previous function , different implementation
    *@param int count  the sequence length
    */
    int printFibionaci(int n);

    /**
    * calcuate power on number ,regarding negative exponent
    *@param int num base number
    *@param int exp expontent number
    *@return double power
    */
    double getPower(double num,int exp);

    /**
    *print characters in reverse order after new line \n
    */
    void echoReverse();

    /**
    *convert decimal to binary
    *@param int number
    *@param int r rank passed =1 ,used in algorithm
    *@return int binary number
    */
    int dec2bin(int num ,int r);

    /**
    *swap two numbers using xor
    *@param int* x ptr to first number
    *@param int* y ptr to second number
    */
    void swapXor(int *x,int* y);

    /**
    *swap two numbers using addition and subtraction
    *@param int* x ptr to first number
    *@param int* y ptr to second number
    */
    void swapAS(int *x,int* y);

    /**
    *swap two numbers using temporary variable
    *@param int* x ptr to first number
    *@param int* y ptr to second number
    */
    void swapTemp(int *x,int* y);

    /**
    *print content of an array of int
    *@param int[] arr array to be printed
    *@param int l array length
    */
    void printArr(int arr[],int l);

    /**
    *reverse content of an array of int
    *@param int[] arr array to be reversed
    *@param int l array length
    */
    void reverseArr(int arr[],int l);

    /**
    *get minimum value in an array of int
    *@param int[] arr array to be reversed
    *@param int l array length
    *@return int minimum value
    */
    int getMin(int arr[],int l);

    /**
    *get maximum value in an array of int
    *@param int[] arr array to be reversed
    *@param int l array length
    *@return int maximum value
    */
    int getMax(int arr[],int l);

    /**
    *draw triangle in console like right arrow head
    *@param int h triangle height
    */
    void drawTri1(int h);

    /**
    *draw triangle in console like up arrow head
    *@param int h triangle height
    */
    void drawTri2(int h);







#endif
