/* Write a C program to check whether a number is divisible by 5 and 11 or not. */

#include <stdio.h>
int main() 
{
    int n; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
    if(n%5==0 && n%11==0) 
     printf("Divisible\n"); 
    else 
     printf("Not Divisible\n");
    return 0;
}
