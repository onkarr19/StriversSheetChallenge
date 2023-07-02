/*

Problem Link: https://www.codingninjas.com/studio/problems/sort-a-stack_8230787?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 

void f(stack<int> &st, int n) {
	if (st.empty() || st.top()<n) st.push(n);
	else {
		int m = st.top(); st.pop();
		f(st,n);
		st.push(m);
	}
}
void sortStack(stack<int> &st)
{
	// Write your code here
	if (st.empty()) return;

	int n = st.top(); st.pop();
	sortStack(st);
	f(st,n);
}
