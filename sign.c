/**
 * Program to implement sign function.
 * Compilation : gcc sign.c
 * Execution : ./a.out
 *
 * @Shivansh Kaushal ( 1910990128 )  , 17/8/2021
 * Ques 3 Bits And Bytes Assignment.
 *
 */


/* Sample input1  : 130
   Sample output1 :  1     */ 

/* Sample input2  : -23
   Sample output2 : -1     */ 
   
/* Sample input3  : 0
   Sample output3 : 0     */ 


#include <stdio.h>

/* Function to tell sign of a number , return 1 for positive number ,
-1 for negative number and 0 for 0. */  
int sign(int x)
{
    // (!!x) returns 0 if x is 0 and 1 if x is any other number except 0.
    int answer = (!!x); 
    
    // (x >> 31) will extract the 31st bit of the x.
    /* if x is 0   -> (x >> 31) will give 0.
       if x is >0  -> (x >> 31) will give 0.
       if x is <0  -> (x >> 31) will give -1 according to arithmetic shift in signed integers
                      where most significant bit continues at left side in case of right shift.
       
    Thus or'ing the result of (x >> 31) with answer will give ->
    0  -> if x is 0
    1  -> if x is >0
   -1  -> if x is <0. 
    */  
    
    answer = answer | (x >> 31);
    
    return answer;
}


int main() 
{
    int x = 0;
    printf("Enter a number \n");
    scanf("%d" ,&x);
    
    // Calling sign function.    
    int answer = sign(x);
    printf("The answer of sign of %d is : %d\n" , x , answer);
 
    return 0;
}
