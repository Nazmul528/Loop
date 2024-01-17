#include<stdio.h>
int main()
{
    int num,i,count;
    while(1){
    printf("Enter the any number :");
    scanf("%d",&num);
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count=3;
            break;
        }
    }
    if(count%3==0)
        printf("%d is not prime number\n\n",num);
    else
        printf("%d is prime number\n\n",num);
        }
}
