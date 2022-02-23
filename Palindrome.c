#include<stdio.h>
int main()
{
    int n,r,sum=0,count;
    scanf("%d",&n);
    count=n;
    while (n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(count==sum)
    printf("True");
    else
    printf("False");
}