#include<stdio.h>

int main()
{
    int i,rev=20;
    for ( i = rev; i>=1; i--)
    {
        if(i%2==0)
        {
            i = i-1;
            printf("%d\n",i);
        }
    }
    
}