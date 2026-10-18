//SET 2.P2
import java.util.Scanner;
public class BankAccount {
     int accountNumber;
     String accountName;
    double balance;
    BankAccount(int a, String n) {
        accountNumber = a;
        accountName = n;
        balance = 0;
    }
    BankAccount(int a, String n, double b) {
        accountNumber = a;
        accountName = n;
        balance = b ;
    }
public void deposit(double amount) {
        balance += amount;
    }
    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            System.out.println("Insufficient balance.");
        }
    }
    public double getBalance() {
        return balance;
    }
    void displayBalance(){
        System.out.println("Account Number: " +accountNumber);

        System.out.println("Account Name Holder: "+accountName);
        System.out.println("Balance: "+balance);
    }
    public static void main(String[] args) {
        BankAccount b1 = new BankAccount(101, "Rashid");
        b1.deposit(100);
        b1.withdraw(50.0);
        b1.displayBalance();

    }
}
