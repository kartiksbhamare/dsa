#include<iostream>
using namespace std ;
void selctionsort(int arr[],int n){
    int i;
    int min;
    int j;
    for (int i = 0; i < n-1; i++)
       {
           min=i;
    for (int j = i+1; i < n; i++)
    {
        if (arr[min]>arr[j])
        {
           min=j;
        }
        if(min!=i){
         swap(arr[min],arr[i]);
        }
    }
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
    int arr[100]={64, 25, 12, 22, 11};
    int n = sizeof(arr);
    selctionsort(arr,n);
    printArray(arr,n);
    
}