/*

Problem Link: https://www.codingninjas.com/studio/problems/reverse-linked-list_8230724?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(!head) return NULL;
    LinkedListNode<int>*p=NULL,*c=head,*n=head->next;
    while (c) {
        c->next=p;
        p=c;
        c=n;
        if(n) n=n->next;
    }

    return p;
}
