#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
};


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}


int lengthofLL(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp != nullptr) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

bool searchinLL(Node*head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    Node *head = n1;

    cout << searchinLL(head, 20) << endl;
    cout << searchinLL(head, 100) << endl;
}
