#include<stdio.h>
int main()
{
    int n,arr[100],i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        // printf("%d ",arr[i]);
        }
        //scanf("%d%d",&a,&b);
        //printf("%d%d",a,b);
        for(i=0;i<n;i++) 
        {
            if(arr[i]%2!=0)
            {
                printf("%d ",arr[i]);
                }
                }
                for(i=0;i<n;i++)
                {
                    if(arr[i]%2==0) 
                    {
                        printf("%d ",arr[i]);
                        }
                        }
                        }
                        