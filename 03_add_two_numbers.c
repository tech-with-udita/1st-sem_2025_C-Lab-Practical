/* Write a C program to add two numbers entered by the user and display the result. */

#include <stdio.h>
int main() 
{
    int a,b,c; 
    printf("Enter the numbers: "); 
    scanf("%d", &a); 
    printf("Enter the numbers: "); 
    scanf("%d", &b); 
    c=a+b;
    printf("Sum: %d", c);
    return 0;
}
