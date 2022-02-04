#include<stdio.h>
int main()
{
  float cel,fahr;
  scanf("%f",&cel);
  fahr = (cel*(9.0/5.0))+32;
  printf("%.2f",fahr);
}