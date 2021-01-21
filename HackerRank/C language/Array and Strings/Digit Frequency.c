#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a[1000];
    int count[11]={0},j;
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        j=a[i]-48;
        if(j>=0&&j<=9)
        count[j]++;
    }
    for(int i=0;i<10;i++)
    printf("%d ",count[i]);
    return 0;
}


