#include<stdio.h>
#include<string.h>
int main()
{
    char m[1001],n[1001];
    printf("input:");
    scanf("%s %s",&m,&n);
    int mlen,nlen;
    mlen=strlen(m);
    nlen=strlen(n);
    printf("%d %d",mlen,nlen);
    printf("\n");
    printf("%s %s",m,n);
    return 0;
}