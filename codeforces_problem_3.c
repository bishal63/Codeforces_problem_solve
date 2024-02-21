#include<stdio.h>
int main()
{
    char X;
    printf("enter your letter:");
    scanf("%c",&X);
    if(X>='a' && X<='z')
    {
        char ans=X-32;
        printf("%c",ans);
    }
    else
    {
        char ans=X+32;
        printf("%c",ans);
    }
    return 0;
}