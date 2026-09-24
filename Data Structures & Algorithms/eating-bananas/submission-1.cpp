class Solution {
public:
bool possible(int mid,vector<int>&piles,int h){
    int pile=0;
    for(int p:piles){
        pile+=(p+mid-1)/mid;
    }
    return pile<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int s=1;
        int e=*max_element(piles.begin(),piles.end());
        int ans=e;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(possible(mid,piles,h)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};
