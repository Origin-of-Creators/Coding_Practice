#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //printf("(%d,%d) ",i,j);
            if(i<=j)
            {
                printf("%d ",n-i);
            }
            else if(j<=i)
            {
                printf("%d ",n-j);
            }
            else 
            {
                printf("%d ",n);
            } 
        }
        for(int j=n-2;j>=0;j--)
        {
            //printf("(%d,%d) ",i,j);
            if(i<=j)
            {
                printf("%d ",n-i);
            }
            else if(j<=i)
            {
                printf("%d ",n-j);
            }
            else 
            {
                printf("%d ",n);
            } 
        }
        printf("\n");
    }
    //half complete
for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                //printf("(%d,%d) ",i,j);
                if(i<=j)
                {
                    printf("%d ",n-i);
                }
                else if(j<=i)
                {
                    printf("%d ",n-j);
                }
                else 
                {
                    printf("%d ",n);
                } 
            }
            for(int j=n-2;j>=0;j--)
            {
                //printf("(%d,%d) ",i,j);
                if(i<=j)
                {
                    printf("%d ",n-i);
                }
                else if(j<=i)
                {
                    printf("%d ",n-j);
                }
                else 
                {
                    printf("%d ",n);
                } 
            }
            printf("\n");
        }
      	// Complete the code to print the pattern.
    return 0;
}

