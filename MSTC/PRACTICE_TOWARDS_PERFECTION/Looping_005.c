#include <stdio.h> 
#include <stdlib.h> 

// looping : left shift 
int main(void) 
{
    int i; 
    int n; 
    int k; 

    puts("Block 1"); 
    for(i = 1; i < 256; i = i << 2)
        printf("i = %d\n", i); 

    puts("Block 2"); 
    for(i = 1; i <= 256; i <<= 2)
        printf("i = %d\n", i); 

    puts("Block 3"); 
    for(i = 1; i < n; i <<= k)
        printf("i = %d\n", i); 

    puts("Block 4"); 
    for(i = 1; i <= n; i <<= n)
        printf("i = %d\n", i); 

    return (0);
}