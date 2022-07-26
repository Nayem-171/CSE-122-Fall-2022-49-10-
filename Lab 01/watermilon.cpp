#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0&&n<=100&&n%2==0&&n!=2)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
