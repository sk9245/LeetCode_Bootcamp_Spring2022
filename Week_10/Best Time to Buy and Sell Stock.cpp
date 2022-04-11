// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX;
        int maxp = 0;
        for(int i = 0; i < prices.size(); i++){
            if (prices[i] < minp)
                minp = prices[i];
            else if(prices[i] - minp > maxp)
                    maxp = prices[i] - minp;
            
        }
        return maxp;   
    }
};
