/* Write a C program to input the basic salary of an employee and calculate the gross salary. */

#include <stdio.h>
int main() 
{
    float bs, hra, da, gs; 
    printf("Enter basic salary: "); 
    scanf("%f", &bs); 
    if(bs<=10000)
    {{
        hra=0.2*bs; 
        da=0.8*bs;
    }} 
    else if(bs<=20000)
    {{
        hra=0.25*bs; 
        da=0.9*bs;
    }} 
    else 
    {{
        hra=0.3*bs; 
        da=0.95*bs;
    }} 
    gs=bs+hra+da; 
    printf("Gross Salary: %.2f\n", gs);
    return 0;
}
