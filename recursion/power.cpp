#include<iostream>
using namesapce std ;
int power(int n ){
    if ( n ==0 ){
        return 1 ;
    }
    int smaller = power(n-1);
    int bigger = 2*smaller ;
    return bigger ;

} 
int main () {
    int n ;
    cin>>n ;
    int ans = power(n);
    cout<<ans<<endl; 
}