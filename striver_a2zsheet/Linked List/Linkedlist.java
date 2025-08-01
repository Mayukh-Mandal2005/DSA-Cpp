class Node {
    int data;
    Node next;

    Node(int data1, Node next1){
        this.data = data1;
        this.next = next1;
    }

    Node(int data2) {
        this.data = data2;
        this.next = null;
    }
};

public class Linkedlist{
    public static Node arraytoLLNode(int[] arr){
        Node head = new Node(arr[0]);
        Node mover = head;

        for (int i = 1; i < arr.length; i++)
        {
            Node temp = new Node(arr[i]);
            mover.next = temp;
            mover = temp;
        }
        return head;
    }
public static void main(String[] args) {
    int[] arr = {2,5,6,8};
    Node y = new Node(arr[3]);
    System.out.println(y.data);

    Node head = arraytoLLNode(arr);
    System.out.println(head.data);
}
}
