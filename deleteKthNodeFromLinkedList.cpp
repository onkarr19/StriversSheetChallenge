/*

Problem link: https://www.codingninjas.com/studio/problems/delete-kth-node-from-end_8230725?challengeSlug=striver-sde-challenge

*/

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
        this->data = data; 
    {
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node *temp = new Node();
    temp->next = head;
    Node *fwd=temp, *bwd=temp;
    for(int i=0; i<K; i++) fwd=fwd->next;

    while(fwd->next){
        fwd = fwd->next;
        bwd = bwd->next;
 
    }
    bwd->next= bwd->next->next;
    return temp->next;
}

