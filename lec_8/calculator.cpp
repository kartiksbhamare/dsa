#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b "<<endl;
    cin>>b;
    char op;
    cout<<"enter operation you want to do!"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a+b<<endl;

        break;
        case '-':
        cout<<a-b<<endl;

        break;
        case '*':
        cout<<a*b<<endl;

        break;
        case '/':
        cout<<a/b<<endl;

        break;

    
    default:
        break;
    }
}