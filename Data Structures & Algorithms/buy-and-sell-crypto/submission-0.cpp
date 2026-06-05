class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int profit=0;
        for(int val:prices){
            minimum=min(minimum,val);
            profit=max(profit,val-minimum);
        }
        return profit;
        
    }
};
