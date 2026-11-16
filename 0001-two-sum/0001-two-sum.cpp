class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int curr=nums[i];
            int rem=target-curr;
            if(mp.contains(rem)) return {mp[rem],i};
            mp.insert({curr,i});
        }
        return {-1};
    }
};