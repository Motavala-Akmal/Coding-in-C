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
        for (int j = i + 1; j < n; ) 
        {
            if (a[i] == a[j]) 
            {
            
                for (int k = j; k < n - 1; k++) 
                {
                    a[k] = a[k + 1];
                }
                
                n--;
            } else 
            
            {
                j++;
            }
        }
    }
    

   

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}