#include<bits/stdc++.h>
using namespace std;
  int removeElement(vector<int>& myvector, int val) {
       for (auto i = myvector.begin(); i != myvector.end(); ++i) {
        if (*i  == val) {
            myvector.erase(i);
            i--;
        }
    }
    return myvector.size();
    }
    
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int val;cin>>val;
    int k = removeElement(nums,val);
   for(int i=0;i<k;i++)
        cout<<nums[i]<<" ";
 
        return 0;
}