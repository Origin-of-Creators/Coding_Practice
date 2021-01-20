#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void check(int i,int j,int first,int last,int size)
{
    if(size>=1)
    {
        if (i==first||i==last||j==first||j==last)
            printf("%d ",size);
        else
            check(i,j,first + 1,last - 1,size - 1);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int m=n*2-1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
            check(i,j,0,m-1,n);
        printf("\n");
    }
    return 0;
}
