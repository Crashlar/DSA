class Display {

   // Private nested or inner class
   private class InnerDisplay {
      public void display() {
         System.out.println("Private inner class method called");
      }

   }

   void display() {
      System.out.println("Outer class (Display) method called");
      // Access the private inner class
      InnerDisplay innerDisplay = new InnerDisplay();
      innerDisplay.display();
   }
}

public class PrivateClass14 {

   private void sayHello() {
      System.out.println("This is a private method in PrivateClass14");
   }

   public static void main(String args[]) {
      Display object = new Display();
      PrivateClass14 privateClass = new PrivateClass14();

      // call to private method
      privateClass.sayHello();

      // method invocation
      object.display();
   }
}
