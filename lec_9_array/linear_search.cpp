#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for (int i = 0; i <n; i++)
    {
       if (arr[i]==key)
       {
        return 1;

       }
       else{
        return 0;
       }
    }
    
}
int main(){
    int arr[100];
    int size,key;
    cin>>size>>key;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<search(arr,size,key)<<endl;
    


}