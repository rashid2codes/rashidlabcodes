//SET 4 .P 6
public class SET4P6 {
    public static<T extends Comparable<T>>
    T findMaximum(T a, T b, T c){
        T max = a;
        if(b.compareTo(max) > 0){
            max = b;
        }
        if(c.compareTo(max) > 0){
            max = c;
        }
        return max;
    }
    public static void main(String[] args) {
        System.out.println("Maximum Integer of 3, 5 and 2 is: " + findMaximum(3, 5, 2));
        System.out.println("Maximum Double of 3.5, 2.1 and 4.8 is: " + findMaximum(3.5, 2.1, 4.8));
        System.out.println("Maximum String of \"Apple\", \"Banana\" and \"Orange\" is: " + findMaximum("Apple", "Banana", "Orange"));

    }
}
