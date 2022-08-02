#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10],i;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<10;i++)
        b[i]=a[i];

    printf("Copy to another array is : ");
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
    return 0;
}
