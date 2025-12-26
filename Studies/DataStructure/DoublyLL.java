package Studies.DataStructure;
import java.util.LinkedList;

class Node{
    int data ; 
    Node next ; 
    Node prev; 

    Node( int data ){
        this.data  = data ; 
        next = null;
        prev = null;
    }
}

class DLL{
    Node head = null; 
    Node tail = null; 

    // print
    void printList(){
        Node temp = head ; 
        if( head == null ){
            System.out.println("Ll is empty ");
            return ; 
        }
        else{
            while (temp != null) {
                System.out.print(temp.data +" -> ");
                temp = temp.next; 
            }
            System.out.println("NULL");
        }
    }
    // INSERT AT HEAD 
    public void insertAtHead(int x ){
        // class obj 
        Node newNode = new Node(x);

        if ( head == null){
            head = newNode ; 
            tail = newNode;
        }
        else{
            newNode.next = head ; 
            head.prev = newNode;
            head = newNode;
        }
        
    }

    public void printBackward() {
        Node temp = tail;
        while (temp != null) {
            System.out.print(temp.data + " <-> ");
            temp = temp.prev;
        }
        System.out.println("NULL");
    }



}

public class DoublyLL {
    public static void main(String[] args) {

        DLL l = new DLL();

        l.insertAtHead(10);
        l.insertAtHead(0);

        l.printList();
        l.printBackward();

        
    }
    
}
