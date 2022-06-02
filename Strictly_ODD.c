#include<stdio.h>
int main(){ int arr[100],n,i,m=0; scanf("%d",&n); for(i=0;i<n;i++) scanf("%d",&arr[i]); // printf("%d",arr[i]); 
for(i=0;i<n;i++) { if(i%2==0) { if(arr[i]%2!=0) { printf("False
"); return 0; } } } printf("True
"); return 0; }