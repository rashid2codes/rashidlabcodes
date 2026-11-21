//SET 4. P8
class BankAccount {
    int accountNumber;
    double balance;

    BankAccount(int accountNumber, double balance) {
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    void withdraw(double amount) {

        if (amount <= 0) {
            throw new IllegalArgumentException(
                "Amount must be positive");
        }

        if (amount > balance) {
            throw new ArithmeticException(
                "Insufficient Balance");
        }

        balance = balance - amount;

        System.out.println("Withdrawal Successful");
        System.out.println("Remaining Balance: " + balance);
    }
}

public class SET4P8 {
    public static void main(String[] args) {

        BankAccount account = new BankAccount(101, 5000);

        try {
            account.withdraw(2000);
        }
        catch (IllegalArgumentException e) {
            System.out.println(e.getMessage());
        }
        catch (ArithmeticException e) {
            System.out.println(e.getMessage());
        }
        finally {
            System.out.println("Transaction Completed");
        }
    }
}