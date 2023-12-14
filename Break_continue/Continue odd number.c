#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the factorail number :");
    scanf("%d",&n);
    for(i=0; i<=n; i++) {
        if(i%2==0)
            continue;
        printf("Enter the number :%d\n",i);
    }
}
