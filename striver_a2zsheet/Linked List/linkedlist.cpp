#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data2){
        data = data2;
        next = nullptr;
    }
};

int main()
{
    int arr[4] = {2,5,8,7};
    Node* y = new Node(arr[0], nullptr);
    cout << y << " " << y->data << " " << y->next << endl;

    Node x = Node(arr[1], nullptr);
    cout << x.data << " " << x.next << endl;
    return 0;
}
