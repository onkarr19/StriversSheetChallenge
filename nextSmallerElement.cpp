/*

Problem Link: https://www.codingninjas.com/studio/problems/next-smaller-element_8230814?challengeSlug=striver-sde-challenge

*/

#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;
    vector<int> res(n,-1);
    for(int i=0; i<n; i++) {
        while(!st.empty() && arr[st.top()]>arr[i]) {
            res[st.top()] = arr[i];
            st.pop();
        }
        
        st.push(i);
    }
    return res;
}
