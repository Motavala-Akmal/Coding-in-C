#include <stdio.h>

int main()
 {
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }    

    int m;

    printf("\nEnter the element you want to delete : ");
    scanf("%d",&m);

    for (int i = 0; i < n; i++)
     {
        if(a[i] == m)
         {
            for (int k = i; k < n - 1; k++) 
                {
                    a[k] = a[k + 1];
                }
                
                n--;
         }
        }
    
    

   

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}













