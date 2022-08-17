#include<iostream>
using namespace std;
bool guess(int a ){
        if (a&1)
        {
            return 0;
        }
        else {
                return 1;
        } 
}
int main (){
    int  p;
    cin>>p;
    if (guess(p))
    {
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd";

    }
       return 0;
    }
