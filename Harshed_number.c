#include<stdio.h>
int main()
{
    int a,s=0,i,n;
    scanf("%d",&a);
    n=a;
    while(a!=0)
    {
        i=a%10;
        s+=i;
        a/=10;
    }
    if(n%s==0)
    printf("True");
    else
    printf("False");
    
    return 0;
}