/*

Problem Link: https://www.codingninjas.com/codestudio/problems/best-time-to-buy-and-sell-stock_8230746?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int res=0;
    int c = prices[0];
    for (auto& p : prices) {
        c = min(c,p);
        res = max(res,p-c);
    }
    return res;
}
