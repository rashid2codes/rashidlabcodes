//SET 4. P2
interface Payment{
    void makePayment(double amount);
    void  generateReceipt();
}
class CreditCardPayment implements Payment{
    public void  makePayment(double amount){
        System.out.println("Paid using credit card: " + amount);
    }
    public void generateReceipt(){
        System.out.println("Credit card receipt generated.");
    }
}
class UPIPayment implements Payment{
    public void  makePayment(double amount){
        System.out.println("Paid using UPI: " + amount);
    }
    public void generateReceipt(){
        System.out.println("UPI receipt generated.");
    }
}
class CashPayment implements  Payment{
    public  void makePayment(double amount){
        System.out.println("Paid using cash: " + amount);
    }
    public void generateReceipt(){
        System.out.println("Cash receipt generated.");
    }
}



public class PaymentSystemInterface {
    public static void main(String[] args) {
        Payment p;
        p = new  CreditCardPayment();
        p.makePayment(1000);
        p.generateReceipt();
        p = new  CreditCardPayment();
        p.makePayment(500);
        p.generateReceipt();;

        p = new CashPayment();
        p.makePayment(200);
        p.generateReceipt();
    }
    
}
