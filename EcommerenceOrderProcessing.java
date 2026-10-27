//SET 3.P10
class Payment {
    double amount;

    Payment(double amount) {
        this.amount = amount;
    }

    void processPayment() {
        System.out.println("Processing payment");
    }

    void processPayment(String reference) {
        System.out.println("Reference: " + reference);
        processPayment();
    }

    void summary() {
        System.out.println("Transaction amount: " + amount);
    }
}

class CreditCardPayment extends Payment {
    CreditCardPayment(double amount) {
        super(amount);
    }

    @Override
    void processPayment() {
        if (amount > 0) {
            System.out.println("Credit card payment successful");
        } else {
            System.out.println("Invalid amount");
        }
    }
}

class UPIPayment extends Payment {
    UPIPayment(double amount) {
        super(amount);
    }

    @Override
    void processPayment() {
        if (amount > 0) {
            System.out.println("UPI payment successful");
        } else {
            System.out.println("Invalid amount");
        }
    }
}

class NetBankingPayment extends Payment {
    NetBankingPayment(double amount) {
        super(amount);
    }

    @Override
    void processPayment() {
        if (amount > 0) {
            System.out.println("Net banking payment successful");
        } else {
            System.out.println("Invalid amount");
        }
    }
}

public class EcommerenceOrderProcessing {
    public static void main(String[] args) {
        Payment[] payments = {
            new CreditCardPayment(1500),
            new UPIPayment(500),
            new NetBankingPayment(2000)
        };

        for (Payment p : payments) {
            p.processPayment();
            p.processPayment("TXN123");
            p.summary();
            System.out.println();
        }
    }
}