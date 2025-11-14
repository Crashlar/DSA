public class Car {

   String model;
    

   public Car(String model) {
    System.out.println("Constructor called");
       this.model = model;
   }

   public static void main(String[] args) {
       Car lamborghini  = new Car("Lamborghini Diablo");

       Car lamborghiniGallardo = new Car("Lamborghini Gallardo");
       lamborghini = lamborghiniGallardo;
   }

}