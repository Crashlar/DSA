// package Studies.DataStructure;

class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class LList {

    Node head = null;
    Node tail = null;

    public int getlengthLL() {
        Node temp = head;
        int counter = 0;
        while (temp != null) {
            counter += 1;
            temp = temp.next;
        }
        return counter;
    }

    // PRINT THE LINKED LIST
    public void Traverse() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public void insertAtHead(int x) {
        Node newNode = new Node(x);
        if (head == null) {

            head = newNode;
            tail = newNode;
        } else {

            newNode.next = head;

            head = newNode;

        }

    }

    public void insertAtTail(int x) {
        Node newNode = new Node(x);

        if (head == null) {
            head = newNode;
            tail = newNode;
        } else {
            tail.next = newNode;
            tail = newNode;
        }
    }

    public void insertAtSpecific(int x, int position, int size) {
        if (position < 1)
            System.out.println("Can't added on that position");
        else if (position == 1) {
            insertAtHead(x);
        } else if ((position == size + 1) | (position > size)) {
            insertAtTail(x);
        } else {
            Node newNode = new Node(x);

            Node current = head;
            // Traverse till (position - 1)th node
            for (int i = 1; i < position - 1; i++) {
                current = current.next;
            }

            // Link new node
            newNode.next = current.next;
            current.next = newNode;

        }

    }

    public void deleteAthead() {
        if (head == null) {
            System.out.println("Not Delete , boz LL is empty ");
            return;
        }
        if (head == tail) {
            head = null;
            tail = null;
        } else {
            Node temp = head;
            head = head.next;
            temp = null;
        }

    }

    public void deleteAtTail() {
        if (head == null) {
            System.out.println("Not Delete , boz LL is empty ");
            return;
        }
        if (head == tail) {
            head = null;
            tail = null;
        } else {
            Node current = head;

            // Traverse till second last node
            while (current.next != tail) {
                current = current.next;
            }

            // Now current is second last node
            current.next = null; // remove link to last node
            tail = current;
        }

    }

    public void deleteAtSpecific(int position, int size) {

        if (position < 1)
            System.out.println("Can't delete on that position");
        else if (position == 1) {
            deleteAthead();
        } else if ((position == size + 1) | (position > size)) {
            deleteAtTail();
        } else {
            Node current = head;

            // Traverse till (position - 1)th node
            for (int i = 1; i < position - 1; i++) {
                current = current.next;
            }

            // current points to node before the one to delete
            Node nodeToDelete = current.next;
            current.next = nodeToDelete.next;

            // Free node (optional in Java, GC handles it)
            nodeToDelete = null;

        }
    }

    public void searchData(int item) {
        if (head == null) {
            System.out.println("Can't search, Linked List is empty");
            return;
        }

        Node temp = head;
        int position = 1;
        boolean found = false;

        // Traverse the list
        while (temp != null) {
            if (temp.data == item) {
                System.out.println("Item " + item + " found at position " + position);
                found = true;
                break;
            }
            temp = temp.next;
            position++;
        }

        if (!found) {
            System.out.println("Item " + item + " not found in the list");
        }
    }
}

public class LinkedListAlgo {
    public static void main(String[] args) {
        LList list = new LList();

        list.insertAtHead(3);
        list.insertAtHead(2);
        list.insertAtHead(1);

        list.insertAtTail(0);

        int size = list.getlengthLL();
        list.insertAtSpecific(5, 3, size);
        System.out.println("Linked List after insertion at head:");
        list.Traverse();

        // delete node
        list.deleteAtTail();
        list.deleteAthead();
        list.deleteAtSpecific(3, size);
        list.deleteAthead();
        list.Traverse();

        list.searchData(5);

    }
}