#include<bits/stdc++.h>
using namespace std ;
void selctionsort(int arr[],int n){
    int i;
    int min;
    int j;
    for (int i = 0; i < n-1; i++)
       {
           min=i;
    for (int j = i+1; i < n; j++)
    {
        if (arr[min]>arr[j])
        {
           min=j;
        }
       
         
    }
    swap(arr[min],arr[i]);
       }
       
}
void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }


    selctionsort(arr,n);
    printArray(arr,n);
    
}
