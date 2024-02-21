#include<stdio.h>
int main()
{
    int N;
    printf("input:");
    scanf("%d",&N);
    int a,max=0;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        
    }
    printf("%d\n",max);
    return 0;
}