#include<stdio.h>
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

    int m;
    printf("Enter the element you want to search : ");
    scanf("%d",&m);
    int count = 0;

    for(int i=0;i<n;i++)
    {
    
        
            if(a[i]==m)
               {
                  if(i==1)
                  {
                    printf("Element found at %dst index\n",i);
                  }
                  else
                  if(i==2)
                  {
                     printf("Element found at %dnd index\n",i);
                  }
                  else
                  if(i==3)
                  {
                     printf("Element found at %drd index\n",i);
                  }
                  else
                  {
                    printf("Element found at %dth index\n",i);
                  }

                      count++;     
                      
                }

            
                   
        
    }
    printf("The Entered element is present %d times",count);
     
}