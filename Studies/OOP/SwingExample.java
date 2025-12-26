import javax.swing.*;

class SwingExample extends JFrame {
    SwingExample() {
        setSize(300, 300);// frame size 300 width and 300 height
        setLayout(null);// no layout manager
        setVisible(true);// now frame will be visible, by default not visible
        setTitle("SwingExample ");// Set Title
    }

    public static void main(String args[]) {
        SwingExample f = new SwingExample();
    }
}