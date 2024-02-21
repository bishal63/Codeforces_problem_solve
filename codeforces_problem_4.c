#include<stdio.h>
int main()
{
    int A;
    printf("input:");
    scanf("%d",&A);
    int sum=A/1000;
    if(sum%2==0)
    {
        printf("EVEN");
    }
    else
    {{
        printf("ODD");
    }}
    return 0;
}