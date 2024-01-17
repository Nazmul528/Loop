#include<stdio.h>
int main()
{
   int num, i,n;
   printf("how many table :");
   scanf("%d",&n);
   for(int m=1;m<=n;m++){
   printf("Enter the any number :");
   scanf("%d",&num);
   for(i=1;i<=10;i++)
   {
       printf("%d * %d =%d\n",num,i,num*i);
   }}
}       
