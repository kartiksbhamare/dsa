#include<iostream>
using namespace std;
int maxi(int arr[],int n){
  int maxx=INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]>maxx)
    {
      maxx=arr[i];
    }
    
  }
   return maxx;
}
int mini (int arr[],int n ){
  int mini=INT_MAX;
  for ( int i = 0; i < n; i++)
  {
    if (arr[i]<mini)
    {
      mini = arr[i];

    }
    return mini;
    
  }
}

int main (){
  int size ;
  cin>>size;
  int arr[1000];
  for (int i = 0; i <=size; i++)
  {
      cin>>arr[i];
  }
  cout<<"Maximum Value: "<<maxi(arr,size)<< endl ;
  cout<<"minimum no: "<<mini(arr,size)<<endl;
}