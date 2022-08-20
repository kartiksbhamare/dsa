#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
       int week=n/7;
        int min=week*28;
        int left=n-min;
        int i=0;
       int sum;
      int total;
        for(int i=week+1;i<left;i++){
            
            sum=sum+i;
            total=sum+min;
           
        }
         cout<<total;
        
}