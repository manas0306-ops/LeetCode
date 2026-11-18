class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<int>vec;
        for(auto i:mp){
            if(i.second==1) vec.push_back(i.first);
        }
        return vec;
    }
};