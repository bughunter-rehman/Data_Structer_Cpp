
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createCircularList(int n) {
    Node* head = new Node();
    head->data = 1;
    Node* prev = head;
    for (int i = 2; i <= n; i++) {
        Node* newNode = new Node();
        newNode->data = i;
        prev->next = newNode;
        prev = newNode;
    }
    prev->next = head;
    return head;
}

int josephus(int n, int k) {
    Node* ptr = createCircularList(n);
    Node* prev = ptr;
    while (ptr->next != ptr) {
        for (int count = 1; count < k; count++) {
            prev = ptr;
            ptr = ptr->next;
        }
        cout << "Eliminated: " << ptr->data << endl;
        prev->next = ptr->next;
        delete ptr;
        ptr = prev->next;
    }
    int survivor = ptr->data;
    delete ptr;
    return survivor;
}

int main() {
    int n = 7;   // total people
    int k = 3;   // eliminate every 3rd person
    int survivor = josephus(n, k);
    cout << "The survivor is at position: " << survivor << endl;
    return 0;
}  