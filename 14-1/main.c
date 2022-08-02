#include <stdio.h>
#include <stdlib.h>
//Write a program to calculate the sum of n;umbers stored in an array of size 10. Take array values from the user.
int main()
{
    int a[10], sum=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum = %d",sum);
    return 0;
}
