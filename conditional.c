/**
 * Program to implement conditional function.
 * Compilation : gcc conditional.c
 * Execution : ./a.out
 *
 * @Shivansh Kaushal ( 1910990128 )  , 17/8/2021
 * Ques 6 Bits And Bytes Assignment.
 *
 */


/* Sample input1  : 0 6 9
   Sample output1 : 9            */ 
  
/* Sample input2  : 34 6 9
   Sample output2 : 6            */ 

/* Sample input3  : -3 6 9
   Sample output3 : 6            */ 

 
#include <stdio.h>

// Function to implement conditional function same as x ? y : z .  
int conditional(int x, int y, int z)
{
    /* Step 1 -> (!x) gives 1 if x is 0 else 0 for all other numbers. ~0 is -1 , thus adding both 
    (!x) + ~0 will give 0 if x is 0 and -1 if x is any other number except 0 */
    int answer = (!x) + ~0;
    
    
    /* Step 2 -> if answer from step 1 is 0 then z ^ ((y ^ z) & ans) gives z as answer 
    because ((y ^ z) & ans) becomes 0 thus z ^ 0 gives z .
    
    but if answer from step 1 is -1 then z ^ ((y ^ z) & ans) gives y as answer because 
    ((y ^ z) & ans) becomes (y ^ z) and hence z ^ (y ^ z) gives y .*/
    answer = z ^ ((y ^ z) & answer);
    
    return answer;
}


int main() 
{
    int x = 0;
    int y = 0;
    int z = 0;
    
    printf("Enter three numbers \n");
    scanf("%d %d %d" , &x , &y , &z);
    
    // Calling conditional function.
    int answer = conditional(x , y , z);
    printf("The answer of conditional function is : %d\n" , answer);
 
    return 0;
}

