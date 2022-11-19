#include<iostream>
using namespace std;

int main (){
    int arrr[3][4];
    for(int i =0;i<3;i++){
        for (int j = 0; i < 4; j++)
        {
            cin>>arrr[i][j];
        }
        
    }
    for(int i =0;i<3;i++){
        for (int j = 0; i < 4; j++)
        {
            cout<<arrr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}