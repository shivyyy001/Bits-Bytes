/**
 * Program to implement bitAnd function.
 * Compilation : gcc bitAnd.c
 * Execution : ./a.out
 *
 * @Shivansh Kaushal ( 1910990128 )  , 17/8/2021
 * Ques 1 Bits And Bytes Assignment.
 *
 */


/* Sample input1  : 6 5
   Sample output1 : 4     */ 

/* Sample input2  : 68 72
   Sample output2 : 64    */ 


#include <stdio.h>

// Function to implement bitAnd. 
int bitAnd(int x , int y)
{
    /* We want our output to be x & y , which can also be written as (~(~x) & ~(~y))
    hence (~(~x) & ~(~y)) simplifies to ~((~x) | (~y)) using De Morgan's Theorem. */
    int ans = ~((~x) | (~y));
    
    return ans;
}


int main() 
{
    int x = 0;
    int y = 0;
    printf("Enter two numbers \n");
    scanf("%d %d" ,&x ,&y);
       
    // Calling bitAnd function.
    int answer = bitAnd(x , y);
    printf("The answer of bitAnd of %d,%d is : %d\n" , x , y , answer);
 
    return 0;
}

