// SET 2.P5
import java.util.HashMap;
import java.util.Map;

class Product {
    int id;
    String name;
    double price;
    int quantity;

    Product(int id, String name, double price, int quantity) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    void display() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Price: " + price);
        System.out.println("Quantity: " + quantity);
       
    }
}

public class ProductHash {
    public static void main(String[] args) {

        HashMap<Integer, Product> catalogue = new HashMap<>();

        addProduct(catalogue, new Product(101, "Laptop", 50000, 10));
        addProduct(catalogue, new Product(102, "Mouse", 500, 20));
        addProduct(catalogue, new Product(103, "Keyboard", 1000, 15));

        System.out.println("\nSearching Product ID 102:");
        Product p = catalogue.get(102);

        if (p != null) {
            p.display();
        } else {
            System.out.println("Product not found.");
        }

       
        if (catalogue.containsKey(102)) {
            catalogue.get(102).price = 600;
            System.out.println("Price updated successfully.");
        }

        
        catalogue.remove(103);
        System.out.println("Product 103 removed.");

        System.out.println("\nAll Products:");
        for (Map.Entry<Integer, Product> entry
                : catalogue.entrySet()) {
            entry.getValue().display();
        }
    }

    static void addProduct(HashMap<Integer, Product> catalogue,
                           Product product) {
        if (!catalogue.containsKey(product.id)) {
            catalogue.put(product.id, product);
            System.out.println("Product added: " + product.name);
        } else {
            System.out.println("Duplicate product ID: " + product.id);
        }
    }
}