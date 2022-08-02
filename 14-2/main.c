#include <stdio.h>
#include <stdlib.h>
//Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
int main()
{
    int a[10], sum=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Average = %.2f",(float)sum/10);
    return 0;
}
