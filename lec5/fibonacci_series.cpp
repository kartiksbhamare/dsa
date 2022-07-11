#include<iostream>
using namespace std;
int main (){
    
    int sum ;
    int i;
    int a=0,b=1;
    int c;
    cout<<a<<" ";
    cout<<b<<" ";


    for ( i = 1; i <=10; i++)
    {
        int c =a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    
   }