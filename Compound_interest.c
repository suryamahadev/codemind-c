#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,m,q,cp;
    scanf("%lf %lf %lf",&p,&r,&t);
    m=1+(r/100);
    q=pow(m,t);
    cp=p*q; 
    printf("%.2f",cp);
    return 0; 
    
}