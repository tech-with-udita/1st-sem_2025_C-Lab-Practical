/* Write a C program to print the first n natural numbers using a while loop. */

#include <stdio.h>
int main() 
{
    int n,i=1; 
    printf("Enter n: "); 
    scanf("%d",&n); 
    while(i<=n) 
    {
     printf("%d\n",i);
     i++;
    }
    return 0;
}
