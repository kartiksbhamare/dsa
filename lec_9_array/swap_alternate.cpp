#include<iostream>
using namespace std;
int alter (int arr[],int n ){
    if(n/2==0){
        for (int i = 0; i < n; i++)
        {
            swap(arr[i],arr[i+1]);
            i++;
        }

    }
    else{ 
        for (int i = 0; i < n-1; i++)
        {
            swap(arr[i],arr[i+1]);
            i++;
        }

    }

    
}
void print (int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    

}

int main (){
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    alter(arr,size);
    print (arr,size);
    
}