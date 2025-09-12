/* Write a C program to input the angles of a triangle and check whether the triangle is valid or not. */

#include <stdio.h>
int main() 
{
    int a,b,c; 
    printf("Enter three angles: "); 
    scanf("%d%d%d", &a, &b, &c); 
    if(a+b+c==180) 
     printf("Valid triangle\n"); 
    else 
     printf("Invalid triangle\n");
    return 0;
}
