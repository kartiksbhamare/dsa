#include<iostream>
using namespace std;
int main (

)
{
    int n ;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col =1;
        while (col<=n)
        {
            char cal='A'+col-1;

            cout<<cal;
            col=col+1;
            
        }
        cout<<"ok";
        cout<<endl;
        row=row+1;
    }
    
}