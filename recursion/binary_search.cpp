#include<iostream>
using namespace std ;
bool binary(int arr[], int size , int start , int end , int num ){
    
    
    if (start>end ){
        return false;

    }
    int mid = start + (end-start)/2;

    if (arr[size]==num){
        return true ;
    }
    else if (mid>num){
        end=mid - 1 ;
        return binary(arr,size , start , end, num );
    }
    else if (mid<num ){
        start = mid +1 ; 
        return binary(arr, size , start, end ,num ); 
    }
   
}
int main (){
    int arr[6]={1,2,3,4,5,6};
    int size = 6;
    int num = 9;
    int start = 0 ;
    int end = size  - 1;

    bool ans = binary(arr,size,start , end , num);
    if (ans ){
        cout << " present"<< endl ; 
    }
    else {
        cout << " absent "<< endl ; 
    }

}