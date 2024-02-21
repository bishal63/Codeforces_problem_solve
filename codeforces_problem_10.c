#include<stdio.h>
int main()
{
    int X;
    printf("input:");
    while(scanf("%d",&X)!=EOF)
    {
        if(X==1999)
        {
        printf("Correct\n");
        break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}