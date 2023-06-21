/*

Problem Link: https://www.codingninjas.com/studio/problems/linked-list-cycle-ii_8230823?challengeSlug=striver-sde-challenge

*/

/****************************************************************

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
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    Node *slow = head, *fast = head;
 
    while(fast && fast->next) {

        slow = slow->next;
        fast = fast->next->next;
        
        if (slow==fast) {
            fast = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            
            return slow;
        }
    }

    return NULL;
}
