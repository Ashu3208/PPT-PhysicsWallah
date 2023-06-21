#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
          vector<int>ans;
        int idx=-1;
        for(auto i:nums){
            idx++;
            if(m.find(target-i)!=m.end()){
              
                ans.push_back(m[target-i]);
                ans.push_back(idx);
                return ans;
            }
            else m[i]=idx;
        }
        return ans;
        
    }
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int target;
    cin>>target;
    vector<int>ans=twoSum(nums,target);
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
  
    
    return 0;
}