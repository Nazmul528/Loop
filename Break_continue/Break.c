#include<stdio.h>
int main()
{
    int i;
    for (i=1; i<=100; i++)
    {
        if(i==20)
            break;
        printf("%d\n",i);
    }
}
