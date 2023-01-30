#include<iostream>
using namespace  std;
bool search(int arr[5],int size, int num){
    if(size==0){
        return false;
    }
    if(arr[0]==num){
        return true;
    }
    else{
        bool remaining =search(arr+1,size-1, num );
        return remaining;
    }
        

}
int main (){
    int arr[5]={1,2,3,4,5};
    int size= 5;
    int num = 9;
    bool ans = search(arr, size , num );
    if ( ans){
        cout<< "present" << endl ; 

    }
    else {
        cout<<"absent"<< endl  ;
    }
}