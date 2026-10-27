//SET 3.P4
class A {
    void show(Object x) {
        System.out.println("A-Object");
    }
}

class B extends A {
    @Override
    void show(Object x) {
        System.out.println("B-Object");
    }

    void show(String x) {
        System.out.println("B-String");
    }
}

public class OverridingvsOverloading {
    public static void main(String[] args) {
        A a = new B();

        String s = "Hello";
        Object o = "Java";

        a.show(s);
        a.show(o);
        a.show(null);
    }
}