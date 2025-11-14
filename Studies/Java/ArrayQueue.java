/*
Algorithm for Queue using Arrays:
1. Create an array to store the queue elements.
2. Maintain two pointers, front and rear, to keep track of the front and rear of the queue.
3. Enqueue: Increment the rear pointer and add the new element to the array at the rear position.
4. Dequeue: Increment the front pointer and return the element at the front position.
5. Handle overflow (queue is full) and underflow (queue is empty) conditions.
*/

import java.util.NoSuchElementException;

public class ArrayQueue {

    private int[] queue;
    private int front;
    private int rear;
    private int size;
    private int capacity;

    public ArrayQueue(int capacity) {
        this.capacity = capacity;
        queue = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    public void enqueue(int item) {
        if (isFull()) {
            System.out.println("Queue is full. Cannot enqueue.");
            return;
        }
        rear = (rear + 1) % capacity;
        queue[rear] = item;
        size++;
        System.out.println(item + " enqueued to queue");
    }

    public int dequeue() {
        if (isEmpty()) {
            throw new NoSuchElementException("Queue is empty. Cannot dequeue.");
        }
        int item = queue[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }

    public int peek() {
        if (isEmpty()) {
            throw new NoSuchElementException("Queue is empty. Cannot peek.");
        }
        return queue[front];
    }

    public boolean isEmpty() {
        return size == 0;
    }

    public boolean isFull() {
        return size == capacity;
    }

    public int size() {
        return size;
    }

    public static void main(String[] args) {
        ArrayQueue queue = new ArrayQueue(5);
        queue.enqueue(10);
        queue.enqueue(20);
        queue.enqueue(30);
        queue.enqueue(40);
        queue.enqueue(50);
        System.out.println("Dequeued item: " + queue.dequeue());
        System.out.println("Front item is: " + queue.peek());
        System.out.println("Queue size: " + queue.size());
    }
}