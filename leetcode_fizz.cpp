class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i ;
        if(i%3==0 && i%5==0){
            cout<<"FizzBuzz";
        }else if (i%3==0){
            cout<<"Fizz";
        }else if (i%5==0){
            cout<<"Buzz";
            
        }
        else{
            cout<<i;
        }
    }return i;
}