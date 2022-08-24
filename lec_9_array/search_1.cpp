#include<iostream>
using namespace std;
bool search(int arr[],int  n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]-1==0)
        {
            /* code */
            return 1;
        }
        else{
            return 0 ;
        }
    }
    
}
int main (){
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<search(arr,size)<<endl;
}