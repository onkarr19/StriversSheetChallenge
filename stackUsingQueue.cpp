/*

Problem Link: https://www.codingninjas.com/studio/problems/stack-using-queue_8230715?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
    queue<int>q1,q2;
    int size;

   public:
    Stack() {
        // Implement the Constructor.
        size=0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return size==0;
    }

    void push(int element) {
        // Implement the push() function.
        q2.push(element);
        while (!q1.empty()) {
            int v = q1.front(); q1.pop();
            q2.push(v);
        }

        swap(q1,q2);
        ++size;
    }

    int pop() {
        // Implement the pop() function.
        if (!q1.empty()) {
            int v = q1.front(); q1.pop();
            --size;
            return v;
        }
        return -1;
    }

    int top() {
        // Implement the top() function.
        return q1.empty() ? -1 : q1.front();
    }
};
