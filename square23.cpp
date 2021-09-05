#include<stdio.h>
 
int main()
{
    int n,i,j;
      
    printf("Enter number : ");
    scanf("%d", &n);
     
    for(i=0; i<n; i++)
    {
        if(i==0 || i==n-1)
        {
            printf("*");
            for(j=0; j<n-1; j++)
            {
                printf("*");
            }
            printf("\n");
             
            continue;
        }
             
        printf("*");
		 
        for(j=0; j<n-2; j++)
        {
            printf(" ");
        }
         
        printf("*\n");
    }
     
    return 0;
}
