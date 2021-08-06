/**
 * Program to print n times every third element of the fibonacci series by recursion with memoization
 *
 * Compilation: gcc -o ques_4 ques_4.c
 * Execution:./ques_4
 *
 * @Aniket , (1910990836) , 4/08/2021
 * Assignment 5
 */

#include<stdio.h>

/**
 * Function to execute fibonacci series
 *
 * Parameters: 
 * *arr : base address of array in which fibonacci series is to be stored
 * n : size of array
 *       
 */

int fib( int *arr, int n )
{
    // if not in array already, store it
    if( arr[n] == -1)
    {
        arr[n] = fib(arr, n-1) + fib(arr, n-2);
    }
}

int main () {
    int n;
    scanf( "%d", &n );
    int size = 3 * n;
    int arr[size];

    //intialize all array elements to -1 
    for(int i = 0 ; i <= size ; i++ )
    {
	arr[i] = -1; 
    }

    arr[0] = 1;
    arr[1] = 1;

    fib(arr, size);

    for(int i = 2 ; i <= size ; i=i+3 )
    {
        printf("%d ",arr[i]);
    }
}
