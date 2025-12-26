// Main File: MultiClassThreadExample.java

// 1. Parent/Base Class (Implements Runnable for the first task)
class SimpleThreadTask implements Runnable {
    private String name;

    public SimpleThreadTask(String taskName) {
        this.name = taskName;
    }

    @Override
    public void run() {
        System.out.println("Task " + name + " starting.");
        try {
            for (int i = 1; i <= 3; i++) {
                System.out.println("Task " + name + " running, iteration: " + i);
                // Pause to simulate work
                Thread.sleep(500); 
            }
        } catch (InterruptedException e) {
            System.out.println("Task " + name + " was interrupted.");
        }
        System.out.println("Task " + name + " finished.");
    }
}

// 2. Sub-Class (A separate task demonstrating synchronized access)
class SynchronizedTask implements Runnable {
    // A shared resource across all instances of this task
    private static int counter = 0; 

    @Override
    public void run() {
        // Use a synchronized block to protect the shared 'counter'
        synchronized (this) {
            for (int i = 0; i < 2; i++) {
                counter++;
                System.out.println(Thread.currentThread().getName() + " incremented the counter to: " + counter);
                try {
                    Thread.sleep(100);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}


// 3. Main Class (Contains the main() method where execution begins)
public class MultiClassThreadExample {

    public static void main(String[] args) {
        System.out.println(":: Main Program Starts ::");

        // First Thread: Using SimpleThreadTask
        SimpleThreadTask task1 = new SimpleThreadTask("A");
        Thread t1 = new Thread(task1);
        t1.start();

        // Second and Third Threads: Using SynchronizedTask
        // The same Runnable instance is shared by two threads
        SynchronizedTask syncTask = new SynchronizedTask();
        Thread t2 = new Thread(syncTask, "Thread-B");
        Thread t3 = new Thread(syncTask, "Thread-C");
        
        t2.start();
        t3.start();

        // Wait for all worker threads to complete before the main thread finishes
        try {
            t1.join();
            t2.join();
            t3.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println(":: All Threads Finished, Main Program Exits ::");
    }
}
