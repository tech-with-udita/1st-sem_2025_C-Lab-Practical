/* Write a C program to calculate the area and perimeter of a circle. */

#include <stdio.h>
int main() 
{
    float r,a,p; 
    printf("Enter radius: "); 
    scanf("%f", &r); 
    a=3.14*r*r;
    printf("Area: %.2f\n", a);   //if i use %.2f then it show the two digit after point //
    p=2*3.14*r;
    printf("Perimeter: %.2f\n", p);
    return 0;
}
