#include<iostream>
using namespace std;
int main ()
{
    int num;
    cin>>num;
    int a=2;
    
    while (a<num)
    {
        if (num %a==0)
        {
           cout<<"not a prime number for "<<a<<endl;

        }
        else{
        cout<<"prime number @"<<a<<endl;}
        a=a+1;
        
        
        
    }
    
    
    
    
}



