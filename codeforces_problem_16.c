#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    printf("input:");
    gets(s);
    for(int i=0;s[i] != '\\';i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}