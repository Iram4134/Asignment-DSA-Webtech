#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp, *newNode;
    int n, x;

    cout << "Enter number of nodes: ";
    cin >> n;

    // Create list (INSERT AT END - IMPORTANT)
    for(int i = 0; i < n; i++) {
        cin >> x;
        newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Print original list
    cout << "Original List:\n";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Reverse logic
    Node *prev = NULL, *curr = head, *next;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    // Print reversed list
    cout << "\nReversed List:\n";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}