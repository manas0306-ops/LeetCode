class Solution {
public:
    set<int>st;
    bool isHappy(int n) {
        if(n==1) return true;
        if(st.find(n)!=st.end()) return false;
        st.insert(n);
        int s=0;
        int tmp=n;
        while(tmp!=0){
            int d=tmp%10;
            s+=d*d;
            tmp/=10;
        }
        return isHappy(s);
    }
};