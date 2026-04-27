#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head=NULL, *temp;
    int n,x,count=0;
     cout<<"enter the number of elements:";
    cin >> n;

    cout<<"enter the value of elements:";
    for(int i=0;i<n;i++) {
        Node* newNode=new Node();  
        cin >> x;
        newNode->data=x;
        newNode->next=head;
        head=newNode;
    }

    temp=head;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    // Display
    cout << "Linked List:\n";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
    
    cout << "Nodes: " << count;
}