#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n){
 for (int i =1; i < n; i++)
 {
    int temp=arr[i];
    int  j = i-1;
    for (; j>=0; j--)
    {
       if (arr[j]>temp)

       {
        arr[j]=arr[j+1];
       }
       else{
        break;
    }
    arr[j+1]=temp;
    } 
 }
 
}
void printarray(int arr[],int n ){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;

    }
    
}
int main (){
int arr [100];
int n ;
cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}
insertion( arr, n );
printarray(arr, n);

}