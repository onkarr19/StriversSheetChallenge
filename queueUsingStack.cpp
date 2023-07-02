/*

Problem Link: https://www.codingninjas.com/studio/problems/day-25-queue-using-stack_8230722?challengeSlug=striver-sde-challenge

*/

#include<stack>
class Queue {
    // Define the data members(if any) here.
    stack<int> input;
    stack<int> output;
    
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        input.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(isEmpty()) return -1;
        else {
            if(output.empty() && (!input.empty())) {
                
                while(!input.empty()) {
                    output.push(input.top());
                    input.pop();
                }

                int x  = output.top();
                output.pop();
                return x;
            } else {
              int x = output.top();
              output.pop();
              return x;
            }
        }
    }

    int peek() {
        // Implement the peek() function here.
        if(input.empty()) return -1;
        else {
            if(!output.empty()) return output.top();
            else {
                while(input.empty() == false) {
                    output.push(input.top());
                    input.pop();
                }
                return output.top();
            }
        }
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return input.empty() && output.empty();
    }
};
