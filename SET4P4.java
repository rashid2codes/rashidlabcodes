//SET 4. P4

interface Printaable{
    void print();
    
}
interface Scannable{
    void scan();
}
class MultifunctionPrinter implements Printaable, Scannable{
    public void print(){
        System.out.println("Printing document...");
    }
    public void scan(){
        System.out.println("Scanning document...");
    }
}
class BasicPrinter implements Printaable{
    public void print(){
        System.out.println(" Basic Printer Printing...");
    }
}




public class SET4P4 {
    public static void main(String[] args) {
        MultifunctionPrinter m = new MultifunctionPrinter();
        m.print();
        m.scan();
        BasicPrinter b = new BasicPrinter();
        b.print();
    }
    
    
}
