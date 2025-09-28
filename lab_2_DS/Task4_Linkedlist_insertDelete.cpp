#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
// insert new node
void insertAtHead(Node*& head, int val) {
    Node* n = new Node{val, head};
    head = n; // update head
}

// Delete first node
void deleteAtHead(Node*& head) {
    if (!head)  return; // check empty list
    Node*  temp =  head; // store   old head
    head = head->next; //   move head
    delete  temp ; // free old head
}

// Print list
void printList(Node* head) {
    cout << "List: ";
    for (Node* cur = head; cur; cur = cur->next)
        cout << cur->data << " ";
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head,  30);   // list: 30
    insertAtHead(head, 20);   //   list: 20 -> 30
    insertAtHead(head,  10); //      list: 10 -> 20 -> 30
    printList(head) ;

    deleteAtHead(head); // remove 10
    printList(head);

    return 0;
}