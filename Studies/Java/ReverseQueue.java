/*
Algorithm to reverse a queue using recursion:
1. If the queue is empty, return.
2. Dequeue an element from the queue and hold it in the function call stack.
3. Recursively call the reverse function for the remaining queue.
4. Enqueue the held element back into the queue.
*/

import java.util.LinkedList;
import java.util.Queue;

public class ReverseQueue {

    public static void reverseQueue(Queue<Integer> queue) {
        if (queue.isEmpty()) {
            return;
        }
        int item = queue.poll();
        reverseQueue(queue);
        queue.add(item);
    }

    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<>();
        queue.add(10);
        queue.add(20);
        queue.add(30);
        queue.add(40);
        queue.add(50);

        System.out.println("Original queue: " + queue);
        reverseQueue(queue);
        System.out.println("Reversed queue: " + queue);
    }
}