
//SET 1.P4
import java.util.Scanner;
public class ReverseNumber{
    public static void main(String[] args) {
        java.util.Scanner sc = new Scanner(System.in);
        System.out.print("Enter N: ");
        int n = sc.nextInt();
    int reverse = 0;
    while(n!=0){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n = n/10;
            
            System.out.println("Reverse Number: " + reverse);
        }
        sc.close();
    }
} 
    

