#include <stdio.h>
int main()
{
    char string[80];
    int count,sum=0;
    scanf("%s", string);
    for(count = 0; string[count]!=NULL;count++)
    {
    if((string[count]>=NULL)&&(string[count]<='9'))
        {
            sum+=(string[count]-'0');
        }
    }
    printf("%d
",sum);
}