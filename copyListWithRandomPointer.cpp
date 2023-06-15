/*

Problem Link: https://www.codingninjas.com/codestudio/problems/copy-list-with-random-pointer_8230734?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    LinkedListNode<int>* res; bool f = 1;
    while (head != NULL) {
        LinkedListNode<int>* t = new LinkedListNode<int>(head -> data);
        
        if (f) res = t, f = 0;
        t->next = head->next;
        t->random = head->random;
        head = head->next;
        t = t->next;
    }
    return res;
}

