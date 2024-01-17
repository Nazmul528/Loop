#include<stdio.h>
int main()
{
    int i,n;
    double fact=1;
    while(1) {
        printf("Enter the any posative number :");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            fact=fact*i;
        }
        printf("totul Factoral number :%.0lf\n",fact);
        fact=1;
    }
}
