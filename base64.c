 /**
 * Program to implement base 64 encoding.
 * Compilation : gcc base64.c
 * Execution : ./a.out
 *
 * @Shivansh Kaushal ( 1910990128 )  , 17/8/2021
 * Ques 9 Bits And Bytes Assignment.
 *
 */


#include <stdio.h>
#include <math.h>
#include <string.h>

void convert_32to62()
{
    // scanning 32 base string.
    char base32[1000];
    scanf("%s",base32);
    
    int array[100];
    int count = 0;
    
    for(int i = 0 ; i < 26 ; i++)
    {
        array[i]=(char)('A' + i);
    }
    
    for(int i = 26 ; i < 52 ; i++)
    {
        array[i] = (char)('a' + count);
        count = count + 1;
    }
    
    for(int i = 52 ; i < 62 ; i++)
    {
        array[i]=(char)('a' + count);
        count = count + 1;
    }
    
    array[62]= '+';
    array[63]= '/';
    
    
    long long int decimal = 0;
    int powerr = 0;
    
    // Converting base 32 to decimal by multiplying it powers of 32.
    for(int i = strlen(base32) - 1 ; i >= 0 ; i--)
    {
        if(base32[i] >= 'A' && base32[i] <= 'Z')
        {
            decimal += pow(32,powerr) * ((int)(base32[i] - 'A'));
            powerr++;
        }
        else
        {
            decimal += pow(32,powerr) * ((int)(base32[i] - '2' + 26));
            powerr++;
        }
    }
    
    // final char array that will hold the 64 base encoded string.
    char string_64[100];
    
    // Converting the final decimal to base 64 by keep dividing it with 64 and extracting remainders.
    int ptr = 0;
    while(decimal != 0)
    {
        int rem = decimal % 64;
        string_64[ptr++] = array[rem];
        decimal = decimal / 64;
    }
    
    // printing the answer .
    for(int i = 0 ; i < ptr ; i++)
    {
        printf("%c" , string_64[i]);
    }
    
    
}


int main() 
{
    int t;
    
    // scanning the number of test cases.
    scanf("%d" , &t);
    
    for(int i = 0 ; i < t ; i++)
    {
        // calling convert_32to62 function.
        convert_32to62();
    }
    
    return 0;
}
