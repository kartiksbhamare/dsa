#include<iostream>
using namespace std;
int sumof(int arr[],int n ){
    int sum=0;
    for (int i = 0; i < n; i++)
    {

        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of array is : "<<sumof(arr,size)<<endl;
}