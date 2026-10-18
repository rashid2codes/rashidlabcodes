//SET 2.P4
import java.util.ArrayList;

class Book {
    String isbn;
    String title;
    String author;
    double price;

    Book(String isbn, String title, String author, double price) {
        this.isbn = isbn;
        this.title = title;
        this.author = author;
        this.price = price;
    }

    void display() {
        System.out.println("ISBN: " + isbn);
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Price: " + price);
        System.out.println("--------------------");
    }
}

public class Books {

    static ArrayList<Book> books = new ArrayList<>();

    
    static void addBook(Book b) {
        for (Book book : books) {
            if (book.isbn.equals(b.isbn)) {
                System.out.println("Book already exists!");
                return;
            }
        }

        books.add(b);
        System.out.println("Book added successfully.");
    }

    
    static void searchBook(String isbn) {
        for (Book b : books) {
            if (b.isbn.equals(isbn)) {
                System.out.println("Book found:");
                b.display();
                return;
            }
        }

        System.out.println("Book not found!");
    }

    
    static void displayBooks() {
        if (books.isEmpty()) {
            System.out.println("No books available.");
            return;
        }

        System.out.println("\nAll Books:");

        for (Book b : books) {
            b.display();
        }
    }

    static void removeBook(String isbn) {
        for (Book b : books) {
            if (b.isbn.equals(isbn)) {
                books.remove(b);
                System.out.println("Book removed successfully.");
                return;
            }
        }

        System.out.println("Book not found!");
    }

    public static void main(String[] args) {

       
        addBook(new Book("B101", "Java Programming",
                "James Gosling", 500));

        addBook(new Book("B102", "Python Basics",
                "Guido van Rossum", 400));

        addBook(new Book("B103", "C++ Programming",
                "Bjarne Stroustrup", 600));

     
        addBook(new Book("B101", "Java Advanced",
                "John", 700));

        searchBook("B102");

        removeBook("B101");

       
        displayBooks();
    }
}