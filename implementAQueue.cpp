/*

Problem Link: https://www.codingninjas.com/studio/problems/implement-a-queue_8230848?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h> 
class Queue {
    int f,b;
    vector<int>v;
public:
    Queue() {
        // Implement the Constructor
        f=0; b=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return f==b;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        v.push_back(data); ++b;
    }

    int dequeue() {
        // Implement the dequeue() function
        if (f==b) return -1;
        int val = v[f];
        ++f;
        return val;
    }

    int front() {
        // Implement the front() function
        if (f==b) return -1;
        return v[f];
    }
};
