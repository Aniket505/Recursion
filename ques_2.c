/**
 * Program to find gcd of two numbers by recursion.
 *
 * Compilation: gcc -o ques_2 ques_2.c
 * Execution:./ques_2
 *
 * @Aniket , (1910990836) , 4/08/2021
 * Assignment 5
 */
#include<stdio.h>
#include<stdio.h>

/**
 * Function to find gcd of two numbers.
 *
 * Parameters:
 * n1 : First number
 * n2 : Second number
 *      
 *returns gcd of n1 and n2  
 */   
#include<stdio.h>
int gcd(int n1, int n2)
{   
    // base condition
    if( n1 == 0 )
        return n2;
    if( n2 == 0 )
	return n1;
    if( n1 == n2 )
	return n1;

    if( n1 > n2 )
	return gcd(n1 - n2, n2);
    return gcd(n1, n2 - n1);

}

int main() {
    printf("Enter two numbers : ");
    int n1, n2;
    scanf( "%d %d", &n1, &n2 );
    int result = gcd(n1, n2);
    printf("GCD = %d", result);
}
