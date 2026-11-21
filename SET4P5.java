//SET 4 . P5
class Box<T> {
    T value;
    Box (T value){
        this.value = value;

    }
    void setValue( T value){
        this.value = value;
    }
    T getValue(){
        return value;
    }
}



public class SET4P5 {
    public static void main(String[] args) {
        Box<Integer> b1 = new Box<>(10);
        Box<String> b2 = new Box<>("Hello");
        Box<Double> b3 = new Box<>(3.14);
        System.out.println("Value in Box 1: " + b1.getValue());
        System.out.println("Value in Box 2: " + b2.getValue());
        System.out.println("Value in Box 3: " + b3.getValue());
    }
}