//SET 1.P1
import java.util.Scanner;
public class PrintNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the N: ");
        int n = sc.nextInt();
    for ( int i =0; i<=n;i++){
        System.out.println(i);
    }
    sc.close();    
   }
}
