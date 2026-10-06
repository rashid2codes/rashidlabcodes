
//SET 1.P3
import java.util.Scanner;
public class SumNumber{
    public static void main(String[] args) {
        java.util.Scanner sc = new Scanner(System.in);
        System.out.print("Enter N: ");
        int n = sc.nextInt();
        int sum = 0;
        for (int i =1; i<=n;i++){
            sum += i;
            System.out.println(i);
        }
        System.out.println("Sum: " + sum);
        sc.close();
    }
}