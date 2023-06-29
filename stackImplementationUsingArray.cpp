/*

Problem Link: https://www.codingninjas.com/studio/problems/stack-implementation-using-array_8230854?challengeSlug=striver-sde-challenge&leftPanelTab=3

*/

#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int* arr;
    int n;
    int max_size;
public:
    
    Stack(int capacity) {
        // Write your code here.
        arr = new int[capacity];
        n = 0;
        max_size = capacity;
    }

    void push(int num) {
        // Write your code here.
        if(n != max_size){
            arr[n] = num;
            n++;
        }
    }

    int pop() {
        // Write your code here.
        if (n==0) return -1;
        return arr[--n];
    }
    
    int top() {
        // Write your code here.
        if (n==0) return -1;
        return arr[n-1];
    }
    
    int isEmpty() {
        // Write your code here.
        return n==0;
    }
    
    int isFull() {
        // Write your code here.
        return max_size==n;
    }
    
};
