#include <stdio.h>
#include <stdlib.h>
//Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
int main()
{
    int a[10], odd=0, even=0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2)
            odd+=a[i];
        else
            even+=a[i];
    }
    printf("Sum of odd numbers = %d\nSum of even numbers = %d",odd,even);
    return 0;
}
