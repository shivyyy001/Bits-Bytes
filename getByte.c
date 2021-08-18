/**
 * Program to implement getByte function.
 * Compilation : gcc getByte.c
 * Execution : ./a.out
 *
 * @Shivansh Kaushal ( 1910990128 )  , 17/8/2021
 * Ques 4 Bits And Bytes Assignment.
 *
 */


/* Sample input1  : 305419896  1
   Sample output1 : 86            */ 
  
 
#include <stdio.h>

// Function to extract byte n from x.  
int getByte(int x , int n)
{
    /* Firstly right shift the number x to (n*8) bits to get the nth byte in front as 0th byte.
    We shift by (n*8) because 1 byte has 8 bits . 
    
    Secondly do bitwise and (&) the result of first operation with 0xff , which is 255 in decimal 
    ans 11111111 in binary to extract only that particular byte (0th) , as 0th byte
    is actually the nth byte after step 1 . */
    int answer = (x >> (n*8)) & (0xff);
    
    return answer;
}


int main() 
{
    int x = 0;
    int n = 0;

    printf("Enter a number x\n");
    scanf("%d" , &x);
    
    printf("Enter the byte number to extract \n");
    scanf("%d", &n);
    
    // Calling getByte function.
    int answer = getByte(x , n);
    printf("The answer of getByte function is : %d\n" , answer);
 
    return 0;
}
