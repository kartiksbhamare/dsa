#include<iostream>
using namespace std;
int main ()
{
    int num;
    cin>>num;
    int a ;
    a=2;
    int sum=0;
    while (a<=num)
    {
        
        sum =sum+a;
        a=a+2;
    }
    cout<<sum<<endl;
}