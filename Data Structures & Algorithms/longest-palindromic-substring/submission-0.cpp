class Solution {
public:
string expand(int i,int j,string s){
    int l=i;
    int r=j;
    while(l>=0 && r<s.size() && s[l]==s[r] ){
        l--;
        r++;
    }
    return s.substr(l+1,r-l-1);
}
    string longestPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            string odd=expand(i,i,s);
            if(odd.size()>ans.size()){
                ans=odd;
            }
            string even=expand(i,i+1,s);
            if(even.size()>ans.size()){
                ans=even;
            }
        }
        return ans;
    }
};
