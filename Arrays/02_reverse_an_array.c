#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int a[n];

    for (int i=0;i<n; i++) 
    {
        scanf("%d",&a[i]);
    }

    printf("Original array: \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    printf("\nReversed array: \n");
    for (int i = n-1; i >= 0; i--) 
     {
        printf("%d ", a[i]);
     }
    printf("\n");

    return 0;
}
