class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int>ans(n+2,0);
        for(vector<int> edge:edges){
            ans[edge[0]]++;
            ans[edge[1]]++;
        }
        for(int i=1;i<=n+1;i++){
            if(ans[i]==n) return i;
        }return -1;
    }
};