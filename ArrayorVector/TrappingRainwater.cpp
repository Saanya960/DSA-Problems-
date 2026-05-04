#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
        int n=height.size();
        vector<int> leftMax(n);
        leftMax[0]=height[0];
        for(int i=1;i<n;i++){
           leftMax[i]= max(height[i-1],leftMax[i-1]);
        }
        vector<int> RightMax(n);
        RightMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
           RightMax[i]= max(height[i+1],RightMax[i+1]);
        }
        int FinalTrap=0;
        for(int i=0;i<n;i++){
           int currTrap= min(RightMax[i],leftMax[i])-height[i];
          if(currTrap>0){FinalTrap+=currTrap;}
        } return FinalTrap;
    }

int main(){
   vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height);
    return 0;
}