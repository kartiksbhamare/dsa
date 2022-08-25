#include<iostream>
using namespace std;
int reversi(int arr[],int n){
    int start=0;
    int end=n-1;
    while (start<=end)
    {
    swap(arr[start],arr[end]);
    start ++;
    end--;
    }
}
void print(int arr[],int n ){
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}
int main (){
    int arr[100];
    int size ;
    cin>> size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        /* code */
    }
    
    reversi(arr,size);
    print(arr,size);
     
}
