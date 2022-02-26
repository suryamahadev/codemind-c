#include<stdio.h>
int main()
{
int num,remainder,Largest= 0;
scanf("%d",&num);

while(num>0)
    {
remainder=num%10;
if(Largest<remainder)
 {
      Largest=remainder;
 }
num=num/10;
    }
printf("%d",Largest);
}