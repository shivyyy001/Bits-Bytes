/**
 * Program to implement logicalShift function.
 * Compilation : gcc logicalShift.c
 * Execution : ./a.out
 *
 * @Shivansh Kaushal ( 1910990128 )  , 17/8/2021
 * Ques 5 Bits And Bytes Assignment.
 *
 */


/* Sample input1  : 2271560481 4
   Sample output1 : 141972530      */ 
 

#include<stdio.h>

// Function to implement logicalShift.
int logicalShift(int x, int n) 
{
    // arithmetic right shifting by n.
    int answer = (x >> n);
    
    /* Converting arithmetic to logical shift as in arithmetic the most significant bit is 
    continued from left side whenever we use right shift operator but in logical right shift 
    0 is continued . Thus And'ing it with answer to convert arithmetic to logical */
    answer = answer & (~(((1 << 31) >> n) << 1));
    
    // returning the answer.
    return answer;
}



int main() 
{
    int x = 0;
    int n = 0;
    
    printf("Enter a number x\n");
    scanf("%d" , &x);
    
    printf("Enter n \n");
    scanf("%d", &n);
    
    // Calling logicalShift function.
    int answer = logicalShift(x , n);
    printf("The answer of logical Shift function is : %d\n" , answer);
 
    return 0;
}

