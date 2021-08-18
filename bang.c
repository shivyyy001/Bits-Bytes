/**
 * Program to implement bang function.
 * Compilation : gcc bang.c
 * Execution : ./a.out
 *
 * @Shivansh Kaushal ( 1910990128 )  , 17/8/2021
 * Ques 7 Bits And Bytes Assignment.
 *
 */


/* Sample input1  : 3
   Sample output1 : 0   */ 
  
/* Sample input2  : 0
   Sample output2 : 1   */ 


#include <stdio.h>

// Function to implement bang operator.  
int bang(int x)
{
    /* Step 1 -> Finding 2's complement of x .
    if x is 0 then 2's complement will be 0 , 
    if x is positive then 2's complement will be a negative number. 
    if x is negative then 2's complement will be a positive number  */
    int answer = (~x + 1);  
    
    /* Step 2 -> Or'ing the 2's complement of x with x.
    if the 2's complement is 0 then this will give 0 but
    if 2's complement is negative then this step will set the most significant bit to 1
    and will change it to a negative number 
    if 2's complement is positive means the original number is negative then we still get a 
    negative number in this step.  */ 
    answer = answer | x;
    
    
    /* Step 3 -> if the answer from step 2 came to be negative number then shifting it by 31 bits will give
    -1 as according to arithmetic shift of signed integers , the most significant bit is kept putting at 
    left side while doing right shift , thus the answer will become -1 + 1 = 0 ,after adding 1 to -1. 
    
    if the answer from step 2 came to be 0 then shifting it by 31 bits will also give 0 thus the answer
    will become 0 + 1 = 1 ,after adding 1 to 0.  */
    answer = (answer >> 31) + 1;
    
    return answer;
}


int main() 
{
    int x = 0;

    printf("Enter a number \n");
    scanf("%d" , &x);
    
    // Calling bang function.
    int answer = bang(x);
    printf("The answer of bang function on %d is : %d\n" , x , answer);
 
    return 0;
}
