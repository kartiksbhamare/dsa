#include <bits/stdc++.h>
using namespace std;

int maxPoints(vector<vector<int>>& points) {
        map<int,int>m;
        int n=points.size();
        
        for(int i=0;i<n;i++){
            float float1=points[i][0];
            float float2=points[i][1];
            cout<<float1<<" "<<float2<<endl;
            float slope=((float2)/(float1));
            cout<<slope<<endl;
            m[slope]++;
        }
        int ans=-1;
        for(auto te:m){
            ans=max(ans,te.second);
        }
        return ans;
    }


int main() {

	vector<vector<int>>v={{1,1},{3,2},{5,3},{4,1},{2,3},{1,4}};
    cout<<maxPoints(v)<<endl;
	return 0;
}

//Compilation time 0.005s
//Code submitted by Susobhan AKhuli
