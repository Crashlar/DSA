// A Java program to illustrate Dynamic Method Dispatch in Java

class Phone {
    public void showTime() {
        System.out.println("Time is 8 am");
    }

    public void on() {
        System.out.println("Turning on Phone...");
    }
}

class SmartPhone extends Phone {
    public void music() {
        System.out.println("Playing music...");
    }
    // overridding is the perfect example of Dynamic Method Dispatch

    @Override
    public void on() {
        System.out.println("Turning on SmartPhone...");
    }
}

public class DynamicMethod13 {
    public static void main(String[] args) {
        Phone obj = new SmartPhone();
        obj.on();
        obj.showTime();
    }
}