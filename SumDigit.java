//SET 1.P7
public class SumDigit {
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Enter Number: ");
        int n = sc.nextInt();
        int sum = 0;
        while(n>0){
            sum = sum + n%10;
            n = n/10;
        }
        System.out.println("Sum of digits is: " + sum);
        sc.close();
    }
}
