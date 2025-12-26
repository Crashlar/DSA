// Node class
class Node {
    int data;       // data field
    Node next;      // pointer to next node

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

// Singly Linked List class
class SinglyLinkedList {
    Node head;   // head pointer

    // Insert at end
    public void insertAtEnd(int value) {
        Node newNode = new Node(value);

        // If list is empty
        if (head == null) {
            head = newNode;
            return;
        }

        // Traverse till last node
        Node current = head;
        while (current.next != null) {
            current = current.next;
        }

        // Link new node at the end
        current.next = newNode;
    }

    // Traverse and print list
    public void printList() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }
}

// Driver class
public class SinglyLinkedLis {
    public static void main(String[] args) {
        SinglyLinkedList list = new SinglyLinkedList();

        // Initial nodes
        list.insertAtEnd(10);
        list.insertAtEnd(20);
        list.insertAtEnd(30);

        System.out.println("Linked List after insertion:");
        list.printList();
    }
}
