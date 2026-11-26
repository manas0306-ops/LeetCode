class Solution {
public:
    bool canAliceWin(int n) {
       int k=10;
       int count=0;
       while(k<=n){
        n-=k;
        k--;
        count++;
       }
       return count%2!=0;
    }
};