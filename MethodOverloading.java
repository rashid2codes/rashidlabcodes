//SET 3.P2
class Calculator{
    void calculate(int a, int b){
        System.out.println("Integer sum: "+(a+b));
    }
    void calculate(double a, double b){
        System.out.println("Double sum: " + (a+b));
    }
    void calculate(long a, long b){
        System.out.println("Long Sum: " + (a+b));
    }
    void calculate(float a, float b){
        System.out.println("Float Sum: "+ (a+b));
    }
     void calculate(int a, double b){
        System.out.println("Int and Double Sum: "+ (a+b));
    }
     void calculate(int a, long b){
        System.out.println("Int and Long Sum: "+ (a+b));
    }
     void calculate(int a, float b){
        System.out.println("Int and Float Sum: "+ (a+b));
    }
}
public class MethodOverloading {
    public static void main(String[] args) {
        Calculator c = new Calculator();
        c.calculate(10, 20);
        c.calculate(10L, 20L);
        c.calculate(10.5, 20.5);
        c.calculate(10, 20.5);
        c.calculate(10, 20L);
        c.calculate(10, 20.5f);
    }
    
}
