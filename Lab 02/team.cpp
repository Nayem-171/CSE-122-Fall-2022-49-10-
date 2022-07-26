#include<iostream>
using namespace std;
int main()
{
     int x,a,b,c,i,sum=0,count=0;
     cin>>x;
     for(i=0;i<x;i++)
     {
         cin>>a>>b>>c;
         sum=a+b+c;
         if(sum>=2)
            {
         count++;
     }
     }
     cout<<count<<endl;

}
