#include<stdio.h>
int main()
{ 
    int x,c=0,i,j,a,b; 
    scanf("%d",&x); 
    scanf("%d%d",&a,&b); 
    a=0; b=1; 
    if(x==0||x==1) 
    printf("True"); 
    while(c<x) 
    { 
        c=a+b; a=b; b=c; 
        
    } if(c==x) 
    { 
        printf("True");
        } else 
        {
            printf("False"); 
            
        } return 0; }