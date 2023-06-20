/*

Problem Link: https://www.codingninjas.com/studio/problems/merge-two-sorted-linked-lists_8230729?challengeSlug=striver-sde-challenge

*/

#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(!first) return second;
    if(!second) return first;

    if(first->data > second->data) swap(first,second);
    Node<int>* res = first;

    while(first!=NULL && second!=NULL){
        Node<int>* temp = NULL;
        while(first!=NULL && first->data <= second->data){
            temp = first;
            first = first->next;
        }
        temp->next = second;
        swap(first,second);
    }

    return res;
}

