#include<iostream>
using namespace std ;
bool sorted_array(int arr[],int size){
    if (size==0 || size ==1){
        return true ;
    }
    if (arr[0] > arr[1]){
        return false  ;
    }
    else{
        bool remaining_part= sorted_array(arr+1, size-1);
        return remaining_part;
    }
    
}
int main (){
    int arr[8]={1,2,3,5,6,7,8}; 
    int size= 8;
    bool ans=sorted_array(arr,size);
    if(ans){
        cout<<" array is sorted "<<endl ;  
    }
    else {
        cout<<" array is not sorted "<< endl ; 
    }
    return 0 ;
}