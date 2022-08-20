#include<iostream>
using namespace std;
int main (){
    int left;
    int right;
    int nom;
    int i ;
    cin>>left;
    cin>>right;
    for ( i = left; i <= right; i++)
    {
        while (nom!=0)
        {
            nom=i%10;
            if (i/nom==0)
            {
                cout<<i;
            }
            else{
                
            }
        }
    }
}