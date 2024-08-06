#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elments : ");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = 0;

    for (int i = 0; i < n; i++) 
    {
        sum = sum + a[i];
    }

     printf("Sum of all elements: %d\n", sum);

    
}