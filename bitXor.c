/**
 * Program to implement bitXor function.
 * Compilation : gcc bitXor.c
 * Execution : ./a.out
 *
 * @Shivansh Kaushal ( 1910990128 )  , 17/8/2021
 * Ques 2 Bits And Bytes Assignment.
 *
 */


/* Sample input1  : 4 5
   Sample output1 : 1     */ 

/* Sample input2  : 68 72
   Sample output2 : 12    */ 


#include <stdio.h>

// Function to implement bitXor.  
int bitXor(int x , int y)
{
    /* Step 1 -> By calculating (x & y) we get the bits which are set in both the numbers , thus by doing 
    ~(x & y) we set the bits which are not set in both numbers. */
    int step1 = (~(x & y));
    
    /* Step 2 -> and by calculating (~x & ~y) we get the bits which are unset in both the 
    numbers , thus by doing ~(~x & ~y) we set the bits which are not unset in both numbers . */
    int step2 = (~(~x & ~y));
    
    /* Step 3 -> finally by doing bitwise and of these 2 expressions we get the bits which are
    unset in one of the number and set in the other number , so thats what bitXor is. */
    int ans = step1 & step2;
   
    return ans;
}


int main() 
{
    int x = 0;
    int y = 0;
    printf("Enter two numbers \n");
    scanf("%d %d" ,&x ,&y);

    // Calling bitXor function.
    int answer = bitXor(x , y);
    printf("The answer of bitXor of %d,%d is : %d\n" , x , y , answer);
 
    return 0;

}

