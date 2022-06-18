#include<iostream>
using namespace std;
int main ()
{
    int num;
    cin>>num;
    int a ;
    a=1;
    int sum=0;
    while (a<=num)
    {
        
        sum =sum+a;
        a=a+1;
    }
    cout<<sum<<endl;
}