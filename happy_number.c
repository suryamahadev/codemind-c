#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    int sum=0,rem;
     while(sum!=1 && sum!=4)
     {
    sum=0;
    while(number!=0)
    {
        rem=number%10;
        sum+=(rem*rem);
        number/=10;
    }
    number=sum;
    }
   if(sum==1)
    printf("True");
   else
    printf("False");
}