class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        vector<int>s1(n+1,0);
        for(vector<int> i:trust){
            s1[i[0]]--;
            s1[i[1]]++;
        }
        for(int i=0;i<=n;i++){
            if(s1[i]==n-1) return i;
        }
        return -1;
    }
};