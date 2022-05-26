#include<stdio.h>
int main()
{ 
    int n,m,sum1=0,sum2=0,i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0) 
        {
            sum1+=i; 
            
        } 
        
    } 
    //printf("%d",sum1); 
    for(j=1;j<m;j++)
    { 
        if(m%j==0)
        { 
            sum2+=j;
            } 
        
    } 
    //printf("%d",sum2); 
    if(sum1==m && sum2==n)
    { 
        printf("Amicable");
        }
        else 
        { 
            printf("Not Amicable"); 
          
            
        } 
        return 0;
    
}