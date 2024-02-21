#include<stdio.h>
int main()
{
    int n;
    printf("input:");
    scanf("%d",&n);
    int b;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&b);
        if(b>=0 && b<=9)
        {
            printf("%d-positive ",b);
            if(b%2==0)
            {
                printf("and even\n");
            }
            else
            {
                printf("and odd\n");
            }
        }
        
        else
        {
            printf("%d-negative ",b);
            if(b%2==0)
            {
                printf("and even\n");
            }
            else
            {
                printf("and odd\n");
            }
        }
        
    }
    return 0;
}