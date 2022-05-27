
#include<stdio.h>
int main()
{
    int n,d,s=0;
    
    scanf("%d",&n);
    while(n>=10) 
    {
        s=0;
        while(n) 
        {
            d=n%10; 
            s+=d;
            n=n/10;
            }
            n=s;
            }
            printf("%d",n);
    
}

