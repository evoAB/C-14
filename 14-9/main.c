#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<=10/2;i++)
    {
        int temp=a[i];
        a[i]=a[9-i];
        a[9-i]=temp;
    }

    printf("Reverse array : ");
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    return 0;
}
