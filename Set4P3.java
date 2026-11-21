//SET 4.P3  


 interface Drawable{
    void draw();

 }
 abstract class Shape{
    abstract double calculateArea();
    void dsplay(){
        System.out.println("Area: "+ calculateArea());

    }
 }
 class Circle extends Shape implements Drawable{
    double radius;
    Circle(double radius){
        this.radius = radius;

    }
    double calculateArea(){
        return 3.14 * radius* radius;

    }
    public void draw(){
        System.out.println("Drawing Circle");
    }

}
class Rectangle extends Shape implements Drawable{
    double length;
    double width;
    Rectangle(double length , double width){
        this.length = length;
        this.width = width;

    }
    double calculateArea(){
        return length * width;

    }
    public void draw(){
        System.out.println("Drawing Rectangle");
    }

}

public class Set4P3 {
    public static void main(String[] args) {
        Circle c = new Circle(2.5);
        Rectangle r = new Rectangle(4, 5);
        c.draw();
        c.calculateArea();


        r.draw();
        r.calculateArea();

    }
    
}
