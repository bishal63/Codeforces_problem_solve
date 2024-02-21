#include<stdio.h>
int main()
{
    int a;
    printf("input:");
    scanf("%d",&a);
    int b;
    for(int i;i>=a;i++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
        printf("multiple-%d",b);
        }
        printf("\n");

    }
    return 0;
}