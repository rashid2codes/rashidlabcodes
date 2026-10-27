
//SET 3. P5
class Account {
    int accountNo;
    double balance;

    Account(int accountNo, double balance) {
        this.accountNo = accountNo;
        this.balance = balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void deposit(double amount, String description) {
        deposit(amount);
        System.out.println(description);
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            System.out.println("Withdrawal rejected");
        }
    }

    double calculateInterest() {
        return 0;
    }

    void display() {
        System.out.println("Account: " + accountNo);
        System.out.println("Balance: " + balance);
    }
}

class SavingsAccount extends Account {
    SavingsAccount(int no, double balance) {
        super(no, balance);
    }

    @Override
    void withdraw(double amount) {
        if (amount > 0 && balance - amount >= 500) {
            balance -= amount;
        } else {
            System.out.println("Minimum balance of 500 required");
        }
    }

    @Override
    double calculateInterest() {
        return balance * 0.05;
    }
}

class CurrentAccount extends Account {
    CurrentAccount(int no, double balance) {
        super(no, balance);
    }

    @Override
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance + 1000) {
            balance -= amount;
        } else {
            System.out.println("Overdraft limit exceeded");
        }
    }
}

public class BankingSystem {
    public static void main(String[] args) {
        Account[] accounts = {
            new SavingsAccount(101, 5000),
            new CurrentAccount(102, 3000)
        };

        accounts[0].deposit(1000, "Salary credited");
        accounts[0].withdraw(2000);
        accounts[1].withdraw(3500);

        for (Account a : accounts) {
            a.display();
        }

        System.out.println(
            "Savings interest: " + accounts[0].calculateInterest()
        );
    }
}
