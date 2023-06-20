/*

problem Link: https://www.codingninjas.com/codestudio/problems/add-two-numbers-as-linked-lists_8230833?challengeSlug=striver-sde-challenge

*/

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node* res = new Node();
    Node* temp = res;

    int c=0;
    while (c>0 || num1 || num2) {
        if (num1) {c+=num1->data; num1=num1->next;}
        if (num2) {c+=num2->data; num2=num2->next;}
        Node* t = new Node(c%10);
        c/=10;
        temp->next = t;
        temp = temp->next;
    }
    return res->next;
}

