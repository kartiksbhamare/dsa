#include<iostream>
using namespace std ;
bool palindrome (string str,int i,int j ){
    if (i > j){
        return true ;
    }

    if (str[i]!=str[j]){
        return false;
    }
    else{
        return palindrome(str,i+1,j-1);

    }
}
int main (){
    string str= "kartikkitrak";
    int ans =palindrome(str,0,str.length()-1);
    if (ans){
        cout<<"yes" << endl  ;
    }
    else{
        cout<<"no"<<endl ;
    }

}