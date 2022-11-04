#include<bit
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];
        vector<int>add;
        vector<bool>ans;
        int n = candies.size();
    for (int i = 1; i < n; i++)
        if (candies[i] > max)
            max = candies[i];
        for ( int i =0;i<n;i++){
            add[i]=candies[i+extraCandies];
            
        }
        for(int i=0;i<n;i++){
            if (add[i]>max){
                ans[i]=true;
            }
            else{
                ans[i]=false;
            }
        }
        return ans;
    }
    int main (){
    
}
};