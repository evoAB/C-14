#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], smallest;
    printf("Enter 10 numbers : ");
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
            smallest=a[i];
        if(smallest>a[i])
            smallest = a[i];
    }
    printf("Smallest number : %d",smallest);
    return 0;
}
