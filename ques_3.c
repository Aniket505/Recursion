/**
 * Program to implement tower of hanoi.
 *
 * Compilation: gcc -o ques_3 ques_3.c
 * Execution:./ques_3
 *
 * @Aniket , (1910990836) , 4/08/2021
 * Assignment 5
 */
#include<stdio.h>
#include<stdio.h>
// global variable to find number of moves
int count = 0;

/**
 * Function to impelement tower of hanoi.
 *
 * Parameters:
 * n : number of disks
 * from : source rod
 * to : destination rod
 * aux : helper/extra rod
 *        
 */   

void tower_of_hanoi(int n, char from, char to, char aux)
{  
    // base condition
    if(n == 1)
    {
	printf("%c to %c\n",from,to);
	count++;
	return ;
    }
    // to move disk from source to helper rod 
    tower_of_hanoi(n-1, from, aux , to);
    count++;
    //to move disk from helper rod to the destination rod
    printf("%c to %c\n",from,to);
    tower_of_hanoi(n-1, aux, to, from);
}

int main () {
    tower_of_hanoi(3, 'A', 'C', 'B');
    printf("Total movements required = %d", count);
}
