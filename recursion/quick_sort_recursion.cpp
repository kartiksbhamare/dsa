#include<iostream>
using namespace std ;
int partition(int arr[], int start , int end ){
    int pivot = arr[start];
    int count=0;
    for(int i = start+1;i<= end;i++){
        if(arr[i]<=pivot){
            count ++;
        }
    }
    int pivot_index = start + count ;
    swap (arr[pivot_index],arr[start]);
    int i =start ;
    int j = end ;

    while (i<pivot_index && j>pivot_index){
        while (arr[i]<=pivot){
            i++;
        }
        while (arr[j]>pivot){
            j--;
        }
        if(i<pivot_index  && j>pivot_index){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivot_index;
}
void quick (int arr[],int start,int end ){
    if(start>=end){
    return;

    }
    int p = partition (arr,start,end);
    quick(arr,start,p-1);

    quick(arr,p+1,end);

}
int main(){
int arr[5]={1,5,7,3,6};
int n = 5;
quick(arr,0,n-1);
for (int i = 0 ;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0 ;
}