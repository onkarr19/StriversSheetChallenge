/*

Problem Link: https://www.codingninjas.com/studio/problems/online-stock-span_8230843?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    vector<int> res;
    stack<int> st;
    st.push(-1);
    int n = price.size();
    for(int i=0; i<n; ++i) {
        while(st.top()!=-1 && price[st.top()] <= price[i]) st.pop();
        
        if (st.top()==-1) res.push_back(i+1);
        else res.push_back(i-st.top());
        st.push(i);
    }

    return res;
}
