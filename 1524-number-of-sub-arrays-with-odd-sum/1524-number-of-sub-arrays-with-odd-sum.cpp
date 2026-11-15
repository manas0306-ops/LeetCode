class Solution {
public:
    int M=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int c=0;
        int odd=0;
        int sum=0;
        int even=1;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==0){
                c=(c+odd)%M;
                even++;
            }else{
                c=(c+even)%M;
                odd++;
            }
        }
        return c;
    }
};