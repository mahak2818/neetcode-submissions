class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int leftmax=height[0];
        int water=0;
        int rightmax=height[height.size()-1];
        while(l<=r){
            if(height[l]<=height[r]){
            if(height[l]>=leftmax){
                leftmax=height[l];
            }
            else{
                water+=leftmax-height[l];
            }
            l++;
        }
        else{
            if(height[r]>=rightmax){
                rightmax=height[r];
            }
            else{
                water+=rightmax-height[r];
            }
            r--;
        }
    }
        return water;
    }
};
