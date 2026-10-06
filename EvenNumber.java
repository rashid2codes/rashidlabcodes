//SET 1.P2
import java.util.Scanner;
public class EvenNumber {
    public static void main(String[] args) {
        java.util.Scanner sc = new Scanner(System.in);
        System.out.print("Enter N: ");
        int n = sc.nextInt();
        for (int i =1; i<n;i++){
            if(i%2==0){
            System.out.println(i);
        }
    }
    sc.close();
        
    }
}
