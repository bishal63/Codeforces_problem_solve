#include<stdio.h>
int main()
{
    int N;
    printf("input:");
    scanf("%d",&N);
    for(int i=0;i<=N;i++)
    {
        if(i%2==0)
        {
            printf("%d-even\n",i);
        }
        else
        {
            printf("%d-odd\n",i);
        }
    
    }
    return 0;
}