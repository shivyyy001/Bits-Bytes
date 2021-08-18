/**
 * Program that implements invert function to return x with n bits starting at p inverted.
 * Compilation : gcc invert.c
 * Execution : ./a.out
 *
 * @Shivansh Kaushal ( 1910990128 )  , 17/8/2021
 * Ques 8 Bits And Bytes Assignment.
 *
 */


/* Sample input1  : 20 4 3
   Sample output1 : 26      */ 


#include<stdio.h>

// Function to return x with n bits starting at p inverted.
int invert(int x , int p , int n)
{

    // To set first n bits to 1 and make other bits 0.
    int answer = ~(~0 << n);
    
    // shifting the 1's group to position p by left shifting the answer by p-n.
    answer = answer << (p - n);
    
    /* inverting the bits using xor operator to make changes visible 
    of inverting n bits starting at p.  */
    return (x ^ answer);
}


int main() 
{
    int x = 0;
    int n = 0;
    int p = 0;
    
    printf("Enter 3 numbers x , p and n \n");
    scanf("%d %d %d" , &x , &p , &n);
    
    // Calling invert function.
    int answer = invert(x , p , n);
    printf("The answer of invert function is : %d\n" , answer);
 
    return 0;
}

