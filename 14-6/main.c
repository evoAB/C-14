#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,j;
    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    for(i=0;i<10;i++)
        for(j=0;j<10;j++)
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

    printf("Sorted array : ");
    for(int i=0; i<10; i++)
        printf("%d ",a[i]);
    return 0;
}
