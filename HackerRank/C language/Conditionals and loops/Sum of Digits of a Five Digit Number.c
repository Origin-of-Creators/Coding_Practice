#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0,digit;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(;n>0;n/=10)
    {
        digit=n%10;
        sum=sum+digit;
    }
    printf("%d",sum);
    return 0;
}
