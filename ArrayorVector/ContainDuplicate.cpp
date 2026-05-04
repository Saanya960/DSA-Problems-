#include <iostream>>
#include <algorithm>
#include <vector>
using namespace std;


 bool containsDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }

        } return false;
    }

int main(){
    vector<int> nums={1,2,2,4};
    cout<<containsDuplicate(nums);
    return 0;
}
