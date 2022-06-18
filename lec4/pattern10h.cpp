#include<iostream>
using namespace std;
int main ()
{
    int n ;
    cin>>n;
    int i=0;
    int count =1;
    
    while (i<=n)
    {
        int j =0;
        while (j<=i)
        
        
        {
            cout<<j+i;
            count=count+1;
            
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}