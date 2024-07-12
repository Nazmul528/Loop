#include<iostream>
using namespace std;
int main()
{
   int num[10],sum=0,max,min,i;
   cout<<"Enter the student number :\n";
   for(i=0;i<10;i++)
   cin>>num[i];
   for(i=0;i<10;i++)
   sum+=num[i];
   float average=sum/10.0;
   max=num[0];
   for(i=0;i<10;i++)
   {
   if(max<num[i])
   max=num[i];
   }
   min=num[0];
   for(i=1;i<10;i++)
   {
   if(min>num[i])
   min=num[i];
   }
 cout<<"the sum :"<<sum<<"\nthe average :"<<average<<"\nthe maximum :"<<max<<"\nthe minimum"<<min;
   
   }
