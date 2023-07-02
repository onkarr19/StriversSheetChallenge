/*

Problem Link: https://www.codingninjas.com/studio/problems/min-stack_8230861?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<pair<int, int>> st;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if (st.empty()) st.push({num, num});
			else if (st.top().second < num) st.push({num, st.top().second});
			else st.push({num, num});
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if (st.empty()) return -1;

			auto t = st.top(); st.pop();
			return t.first;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			return st.empty() ? -1 : st.top().first;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			return st.empty() ? -1 : st.top().second;
		}
};
