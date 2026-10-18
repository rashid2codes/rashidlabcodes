
//SET 2.P10
 import java.util.HashMap;
import java.util.Map;

class Product {
    private int id;
    private String name;
    private double price;

    Product(int id, String name, double price) {
        this.id = id;
        this.name = name;
        this.price = price;
    }

    int getId() {
        return id;
    }

    String getName() {
        return name;
    }

    double getPrice() {
        return price;
    }
}

class CartItem {
    private Product product;
    private int quantity;

    CartItem(Product product, int quantity) {
        this.product = product;
        this.quantity = quantity;
    }

    Product getProduct() {
        return product;
    }

    int getQuantity() {
        return quantity;
    }

    void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    double getAmount() {
        return product.getPrice() * quantity;
    }
}

class ShoppingCart {
    private HashMap<Integer, CartItem> cart = new HashMap<>();

   
    void addProduct(Product product, int quantity) {
        if (quantity <= 0) {
            System.out.println("Invalid quantity!");
            return;
        }

        int id = product.getId();

        if (cart.containsKey(id)) {
            CartItem item = cart.get(id);
            item.setQuantity(item.getQuantity() + quantity);
        } else {
            cart.put(id, new CartItem(product, quantity));
        }

        System.out.println("Product added successfully.");
    }

  
    void updateQuantity(int id, int quantity) {
        if (quantity <= 0) {
            System.out.println("Invalid quantity!");
            return;
        }

        if (cart.containsKey(id)) {
            cart.get(id).setQuantity(quantity);
            System.out.println("Quantity updated.");
        } else {
            System.out.println("Product not found!");
        }
    }


    void removeProduct(int id) {
        if (cart.remove(id) != null) {
            System.out.println("Product removed.");
        } else {
            System.out.println("Product not found!");
        }
    }

  
    double calculateSubtotal() {
        double subtotal = 0;

        for (CartItem item : cart.values()) {
            subtotal += item.getAmount();
        }

        return subtotal;
    }

    double calculateDiscount() {
        double subtotal = calculateSubtotal();

        if (subtotal >= 5000) {
            return subtotal * 0.10;
        } else if (subtotal >= 1000) {
            return subtotal * 0.05;
        }

        return 0;
    }

    void displayCart() {
        System.out.println("\nProduct\t\tQuantity\tAmount");

        for (CartItem item : cart.values()) {
            System.out.printf("%-16s %-15d %.2f%n",
                    item.getProduct().getName(),
                    item.getQuantity(),
                    item.getAmount());
        }

        double subtotal = calculateSubtotal();
        double discount = calculateDiscount();
        double finalAmount = subtotal - discount;

      
        System.out.printf("Subtotal:             %.2f%n", subtotal);
        System.out.printf("Discount:             %.2f%n", discount);
        System.out.printf("Final Amount:          %.2f%n", finalAmount);
    }
}

public class Ecommerce {
    public static void main(String[] args) {

        Product p1 = new Product(101, "Keyboard", 800);
        Product p2 = new Product(102, "Mouse", 700);

        ShoppingCart cart = new ShoppingCart();

        cart.addProduct(p1, 2);
        cart.addProduct(p2, 1);

        cart.displayCart();
    }
}