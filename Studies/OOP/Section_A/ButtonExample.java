import java.awt.*;
import java.awt.event.*;

class ButtonExample {
    public static void main(String[] args) {
        // creation of Frame
        Frame f = new Frame();
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
        f.setTitle("ButtonExample");
        // creation of Button
        Button b = new Button("SUBMIT");
        b.setBounds(150, 200, 95, 30);
        f.add(b);
        // Code for Close window
        f.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });
    }
}