#include <stdio.h>

int main() {
   
    int n1;
    int n2;

    printf("Enter the number of elements in first array : ");
    scanf("%d",&n1);
    printf("Enter the number of elements in second array : ");
    scanf("%d",&n2);
    int a1[n1];
    int a2[n2];

    printf("Enter first array : \n");

    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
    }

    printf("Enter second array : \n");

    for(int i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
    }

    int a3[n1 + n2];
    int i, j = 0, k = 0;

    for (i = 0; i < n1 + n2; i++) 
    {
        if (j < n1 && k < n2) 
        {
            if (a1[j] < a2[k]) 
            {
                a3[i] = a1[j++];
            }
             else 
             {
                a3[i] = a2[k++];
            }
        } 
        else if (j < n1)
         {
            a3[i] = a1[j++];
        } 
        
        else 
           {
            a3[i] = a2[k++];
        }
    }

    printf("Merged array: \n");
    for (i = 0; i < n1 + n2; i++)
     {
        printf("%d ", a3[i]);
    }
    printf("\n");

    return 0;
}
