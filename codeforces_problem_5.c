#include<stdio.h>
int main()
{
    char X;
    printf("input:");
    scanf("%c",&X);
    if(X>='1' && X<='9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(X>='a' && X<='z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }
    return 0;
}