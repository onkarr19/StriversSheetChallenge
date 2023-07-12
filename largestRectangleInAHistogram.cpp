/*

Problem Link: https://www.codingninjas.com/studio/problems/largest-rectangle-in-a-histogram_8230792?challengeSlug=striver-sde-challenge

*/

#include <stack>
int largestRectangle(vector < int > & arr) {
   // Write your code here.
    
    int n=arr.size();
    int area = arr[0], i = 0;
    vector<int> left_smaller(n, -1), right_smaller(n, n);
    stack<int> s; s.push(-1);

    while (i<n) {
        while (!s.empty() && s.top() != -1 && arr[s.top()] > arr[i]) {
          right_smaller[s.top()] = i;
          s.pop();
        }
        if (i>0 && arr[i] == arr[i-1]) left_smaller[i] = left_smaller[i-1];
        else left_smaller[i] = s.top();
        s.push(i);
        i++;
    }


    for (i=0; i<n; ++i) {
        area = max(area, arr[i]* (right_smaller[i]- left_smaller[i]-1));
    }
    return area;
 }
