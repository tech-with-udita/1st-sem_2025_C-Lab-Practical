/* Write a C program to take an integer variable, input its value from the user, and display it. */

#include <stdio.h>
int main() 
{
    int x; 
    printf("Enter an integer: "); 
    scanf("%d", &x); 
    printf("You entered: %d\n", x);
    return 0;
}
