//SET 3.P7
class Animal {
    Animal reproduce() {
        System.out.println("Animal reproduces");
        return new Animal();
    }

    void sound() {
        System.out.println("Animal sound");
    }

    void sound(String name) {
        System.out.println(name + " makes a sound");
    }
}

class Dog extends Animal {
    @Override
    Dog reproduce() {
        System.out.println("Dog reproduces");
        return new Dog();
    }

    @Override
    void sound() {
        System.out.println("Dog barks");
    }
}

public class Covarient {
    public static void main(String[] args) {
        Animal a = new Dog();
        Animal result1 = a.reproduce();
        result1.sound();

        Dog d = new Dog();
        Dog result2 = d.reproduce();
        result2.sound("Tommy");
    }
}