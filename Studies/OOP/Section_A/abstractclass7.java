
abstract class Animal {
  // Abstract method (does not have a body)
  public abstract void animalSound();


  public void sleep() {
    System.out.println("Zzz");
  }
}

// concrete class
class Pig extends Animal {
  public void animalSound() {

    // must to implement the abstract method
    
    System.out.println("The pig says: wee wee");
  }
}

class abstractclass7 {
  public static void main(String[] args) {
    Pig myPig = new Pig();
    myPig.animalSound();

    // call the super class method 
    myPig.sleep();
  }
}
