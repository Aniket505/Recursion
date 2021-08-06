/**
 * Program to do selection sort with recursion.
 *
 * Compilation: gcc -o ques_1 ques_1.c
 * Execution:./ques_1
 *
 * @Aniket , (1910990836) , 4/08/2021
 * Assignment 5
 */
#include<stdio.h>

/**
 * Function to swap two elements of array
 *
 * Parameters:
 * a[] : base address of array
 * i,j : index of elements to be swaped.
 *
 *
 */
void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

/**
 * Function to do selection sort recursively
 *
 * Parameters:
 * a[] : base address of array
 * i : starting index of array
 * n: size of array
 *
 */
void selection_sort (int a[] , int i , int n)
{
    // variable to store index of minimum element
    int min = i;
    // finding minimum element
    for( int j = i + 1 ; j < n ; j++ )
    {
        if( a[j] < a[min] )
	{
            min = j;
	}
    }

    swap( a, min , i );

    if( i + 1 < n )
    {
        selection_sort(a, i + 1, n);
    }
}

int main() {

    printf("Enter size of array : ");
    int n;
    scanf( "%d", &n );
    int a[n];
    //Input array
    for( int i = 0 ; i < n ; i++ )
    {
        scanf( "%d", &a[i] );
    } 
   
    selection_sort( a, 0 , n);

    for( int i = 0 ; i < n ; i++ )
    {
	printf( "%d ",a[i] );
    }
}
