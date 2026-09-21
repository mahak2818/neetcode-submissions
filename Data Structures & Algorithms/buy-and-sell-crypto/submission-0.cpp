class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int price=prices[0];
        int profit=0;
        for(int i=1;i<n;i++){
            if(prices[i]<price){
                price=prices[i];
            }
            profit=max(profit,prices[i]-price);
        }
        return profit;
    }
};
