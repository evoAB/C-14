#include <stdio.h>
#include <stdlib.h>
// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
int main()
{
    int a[10], greatest = 0;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        if(greatest<a[i])
            greatest = a[i];
    }
    printf("Greatest number : %d",greatest);
    return 0;
}
