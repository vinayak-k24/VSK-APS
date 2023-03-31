#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

void insertNode(Node** head, int data){
    
    Node* new_node = new Node();
    
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void deleteNode(Node** head){
    Node* temp = *head;
  
    if(*head == NULL){
        cout << "Deletion from Empty Singly Linked Not Possible" ; return; } // move head to next node in Singly Linked List *head = (*head)->next; 
   delete(temp); // delete the memory allocated 
}

// Function to traverse
void display(Node* temp) {
    cout << "Linked List: ";
    int count = 0; 
    
    while(temp!=NULL){
       cout << temp->data << " "; temp = temp->next;
       count ++; 
    }
    cout << "\nThere are " << count << " items in Linked List\n"; cout << endl;
}

int main() {
    Node* head = NULL; 
    // Need '&' i.e. address as we need to change head 
    insertNode(&head,50);
    insertNode(&head,40);
    insertNode(&head,30);
    insertNode(&head,20);
    insertNode(&head,10);

    // No '&' as head is not changed 
    display(head);

    deleteNode(&head); 
    deleteNode(&head); 
    deleteNode(&head);
  
    display(head); 
    return 0;
}