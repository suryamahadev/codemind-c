#include<stdio.h>
#include<string.h>
int main()
{ 
    char str[100]; 
    int len,i,a,b;
    scanf("%[^
]",str);
    len=strlen(str);
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        printf("%c",str[i]); 
        
    }
    return 0;
    
}