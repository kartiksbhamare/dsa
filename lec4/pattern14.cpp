#include<iostream>
using namespace std;
int main (

)
{
    int n ;
    cin>>n;
    int row=1;
    char cal='A';
    while (row<=n)
    {
        int col =1;
        while (col<=n)
        {
            

            cout<<cal;
            col=col+1;
            cal=cal+1;
            
        }
        
        cout<<endl;
        row=row+1;
    }
    
}