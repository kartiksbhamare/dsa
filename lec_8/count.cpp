#include<iostream>
using namespace std;
int counting(int a ){
    for (int  i = 1; i <=a; i++)
    {
        cout<<i<<" ";
        
    }
    cout<<endl;
}
int main(){
int b ;
cin>>b;
counting(b);
return 0;
}