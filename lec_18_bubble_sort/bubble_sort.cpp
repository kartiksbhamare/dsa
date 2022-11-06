#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n  ){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if (arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
        
    }

}
void print(int arr[],int n ){
int i ;
for (  i = 0; i < n; i++){

      cout << arr[i]<<" ";
cout << endl;
}

int main()
{
int arr[100];
int n ;
cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
bubblesort(int arr[],int n  );
print(int arr[],int n );
}