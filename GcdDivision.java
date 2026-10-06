import java.util.Scanner;
public class GcdDivision{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter first number: ");
    int n1 = sc.nextInt();
    System.out.println("Enter second number: ");    
    int n2 = sc.nextInt();
   while(n2 != 0) {
      int remainder =n1% n2;
      n1 = n2;
      n2 = remainder;
      

    }
    System.out.println("GCD is: " + n1);
  }
}