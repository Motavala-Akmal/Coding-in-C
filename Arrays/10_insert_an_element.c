#include <stdio.h>

int main() {

    int n = 5;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int a[n];
    int i, pos, element;

    for(int i = 0 ; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    
   if(pos <= n+1)
   {

    printf("Enter the elemnet to insert: ");
    scanf("%d", &element);

    for (i = n; i >= pos; i--)
     {
        a[i] = a[i - 1];
    }
    a[pos - 1] = element;
    n++;  

    printf("Array after insertion: \n");
    for (i = 0; i < n; i++)
     {
        printf("%d ", a[i]);
    }
    printf("\n");
   }
   else
     {
        printf(" Please Enter the valid position !!");
     }

    return 0;
}
