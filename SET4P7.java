//SET4.P7
import java.util.ArrayList;

public class SET4P7 {
    public static void main(String[] args) {

        // Autoboxing
        int a = 10;
        Integer obj = a;

        System.out.println("Integer Object: " + obj);

        // Unboxing
        int b = obj;
        System.out.println("Primitive Value: " + b);

        // ArrayList
        ArrayList<Integer> list = new ArrayList<>();

        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);

        int sum = 0;

        for (int n : list) {
            sum += n;
        }

        double average = (double) sum / list.size();

        System.out.println("Numbers: " + list);
        System.out.println("Sum: " + sum);
        System.out.println("Average: " + average);

        // Parsing
        int x = Integer.parseInt("100");
        double y = Double.parseDouble("25.5");

        // Integer to String
        String str = Integer.toString(x);

        System.out.println("Parsed Integer: " + x);
        System.out.println("Parsed Double: " + y);
        System.out.println("Integer to String: " + str);
    }
}