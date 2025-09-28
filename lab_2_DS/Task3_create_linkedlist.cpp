#include <iostream>   // include input out put library
using namespace std;  //using namespace
struct Node {
    int data;  // value store
    Node* next;        //    pointer to next node
};
int main() {
    // Create three nodes manually
    Node*  head =  new Node{10, NULL};
    Node* second = new Node{20, NULL};
    Node*  third = new  Node{30, NULL};
    // link them
    head->next = second;
    second->next = third;
   // Traverse list from head
    cout << "Linked list: ";
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";   // print data
        temp = temp->next;           // move to next node
    }
    return 0;
}