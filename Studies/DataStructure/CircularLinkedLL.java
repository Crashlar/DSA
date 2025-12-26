// package Studies.DataStructure;

class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class CircularLinkedL {
    Node head = null;
    Node tail = null;

    public void Traverse() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        Node temp = head;
        do {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        } while (temp != head);
        System.out.println("(back to Head)");
    }

    public void printList() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }



    public int getlengthLL() {
        if (head == null)
            return 0;
        Node temp = head;
        int counter = 0;
        do {
            counter++;
            temp = temp.next;
        } while (temp != head);
        return counter;
    }

    public void deleteAtHead() {
        if (head == null) {
            System.out.println("Not Deleted, because LL is empty");
            return;
        }
        if (head == tail) {
            head = null;
            tail = null;
        } else {
            head = head.next;
            tail.next = head; // maintain circular link
        }
    }

    public void deleteAtTail() {
        if (head == null) {
            System.out.println("Not Deleted, because LL is empty");
            return;
        }
        if (head == tail) {
            head = null;
            tail = null;
        } else {
            Node current = head;
            while (current.next != tail) {
                current = current.next;
            }
            current.next = head; // maintain circular link
            tail = current;
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

        do {
            if (temp.data == item) {
                System.out.println("Item " + item + " found at position " + position);
                found = true;
                break;
            }
            temp = temp.next;
            position++;
        } while (temp != head);

        if (!found) {
            System.out.println("Item " + item + " not found in the list");
        }
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


}

public class CircularLinkedLL {

    public static void main(String[] args) {
        CircularLinkedL list = new CircularLinkedL();

        list.insertAtHead(3);
        list.insertAtHead(2);
        list.insertAtHead(1);

        list.insertAtTail(0);
        // list.printList(); 
        list.deleteAtHead();

        list.Traverse();
        

    }
}
