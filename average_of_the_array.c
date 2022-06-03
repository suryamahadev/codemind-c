#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],n,i; 
    float sum=0; 
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    scanf("%d",&arr[i]);
    //scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i]; 
        
    } 
    float avg=sum/n; 
    /*for(i=0;i<n;i++)
    { 
        if(arr[i]==avg) 
        { 
            printf("True"); 
            return 0; 
            
        } 
        
    }
    //printf("False"); 
    //a=abs(sum1-sum2);
    */printf("%.2f",avg);
    return 0;
    
}
   