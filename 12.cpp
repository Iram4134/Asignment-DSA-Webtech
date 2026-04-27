#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head1 = NULL, *head2 = NULL, *temp, *newNode;
    int n1, n2, x;

    // First list
    cout << "Enter number of nodes in list 1: ";
    cin >> n1;

    for(int i = 0; i < n1; i++) {
        cin >> x;
        newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        if(head1 == NULL) {
            head1 = newNode;
        } else {
            temp = head1;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Second list
    cout << "Enter number of nodes in list 2: ";
    cin >> n2;

    for(int i = 0; i < n2; i++) {
        cin >> x;
        newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        if(head2 == NULL) {
            head2 = newNode;
        } else {
            temp = head2;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Merge logic
    if(head1 == NULL) {
        head1 = head2;
    } else {
        temp = head1;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = head2;
    }

    // Display merged list
    cout << "Merged List:\n";
    temp = head1;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}