#include<stdio.h>
int digi(int o)
{
    int l=o,m=0,c=0,r;
    while(o) 
    {
        r=o%10;
        m++;
        if(r!=0 && l%r==0) 
        c++;
        o=o/10; 
        
    }
    if(m==c)
    {
        return 1;
        }
        else 
        return 0;
    
}
int main()
{
    int j,r,i,k,a,b,t,m=0,c=0;
    scanf("%d%d",&a,&b);
    for(j=a;j<=b;j++)
    {
        t=j; 
        //printf("%d ",t);
        if(t<=9) 
        printf("%d ",t);
        else 
        {
            if(digi(t)==1)
            printf("%d ",t); 
            
        }
        }
        }
        