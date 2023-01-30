#include<iostream>
using namespace std; 
int sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    else{
        
        
        int remaining=sum(arr+1,size-1);
        int ans = arr[0]+remaining;
        return ans ;
        
    }

}
int main (){
    int arr[5]={1,2,3,8,5};
    int size= 5;
    int ans=sum(arr,size);
    cout<<ans<<endl;

}