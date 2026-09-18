class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        int pre=0,suff=0;
        for(int i=0;i<n;i++){
            pre=nums[i]*(pre==0?1:pre);
            suff=nums[n-1-i]*(suff==0?1:suff);
            res=max(res,max(pre,suff));
        }
        return res;
    }

};
