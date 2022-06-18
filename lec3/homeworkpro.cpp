#include<iostream>
using namespace std;
int main ()
{
    char ch;
    cin>>ch;
    if(97<=ch && ch<=122){
        cout<<"ch in lower case ";
    }
    else if (65<=ch && ch<=90){
        cout<<"ch is a upper case";

    }
    else if (48<=ch && 57>=ch){
        cout<<"ch is  a number ";
    }

}