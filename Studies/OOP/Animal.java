class Animal {
    public void eat() {
        System.out.println("This animal eats food.");
    }

    public void sound() {
        System.out.println("This animal makes a sound.");
    }
}

class Lion extends Animal {
    @Override
    public void eat() {
        System.out.println("Lion eats meat.");
    }

    @Override
    public void sound() {
        System.out.println("Lion roars.");
    }
}

class Tiger extends Animal {
    @Override
    public void eat() {
        System.out.println("Tiger eats meat and sometimes hunts in water.");
    }

    @Override
    public void sound() {
        System.out.println("Tiger growls.");
    }
}

class Panther extends Animal {
    @Override
    public void eat() {
        System.out.println("Panther eats deer, wild boar, and other smaller animals.");
    }

    @Override
    public void sound() {
        System.out.println("Panther purrs and hisses.");
    }
}
class Main {
    public static void main(String[] args) {
        Animal myAnimal = new Animal();
        Lion myLion = new Lion();
        Tiger myTiger = new Tiger();
        Panther myPanther = new Panther();

        myAnimal.eat();
        myAnimal.sound();

        myLion.eat();
        myLion.sound();

        myTiger.eat();
        myTiger.sound();

        myPanther.eat();
        myPanther.sound();
    }
}