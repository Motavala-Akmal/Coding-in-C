#include <stdio.h>

int main() {
     int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }

    int i, first, second;

    if (n < 2) 
    {
        printf("Array doesn't have enough elements.\n");
        return -1;
    }

    first = second = -2147483648; 
    for (i = 0; i < n; i++)
     {
        if (a[i] > first)
         {
            second = first;
            first = a[i];
        } 
        
        else if (a[i] > second && a[i] != first) 
         {
            second = a[i];
        }
    }

    if (second == -2147483648) 
     {
        printf("There is no second largest element.\n");
    } else 
     {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
