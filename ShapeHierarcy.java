//SET 3.P8
abstract class Shape {
    abstract double area();
    abstract double perimeter();

    boolean compareArea(Shape s) {
        return area() > s.area();
    }

    boolean compareArea(double a) {
        return area() > a;
    }
}

class Circle extends Shape {
    double r;

    Circle(double r) {
        this.r = r;
    }

    Circle(int diameter) {
        r = diameter / 2.0;
    }

    double area() {
        return Math.PI * r * r;
    }

    double perimeter() {
        return 2 * Math.PI * r;
    }
}

class Rectangle extends Shape {
    double length, width;

    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    double area() {
        return length * width;
    }

    double perimeter() {
        return 2 * (length + width);
    }
}

class Triangle extends Shape {
    double a, b, c;

    Triangle(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    double area() {
        double s = (a + b + c) / 2;
        return Math.sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() {
        return a + b + c;
    }
}

public class ShapeHierarcy {
    public static void main(String[] args) {
        Shape[] shapes = {
            new Circle(5.0),
            new Rectangle(4, 6),
            new Triangle(3, 4, 5)
        };

        for (int i = 0; i < shapes.length - 1; i++) {
            for (int j = i + 1; j < shapes.length; j++) {
                if (shapes[i].area() < shapes[j].area()) {
                    Shape temp = shapes[i];
                    shapes[i] = shapes[j];
                    shapes[j] = temp;
                }
            }
        }

        for (Shape s : shapes) {
            System.out.printf(
                "Area: %.2f, Perimeter: %.2f%n",
                s.area(), s.perimeter()
            );
        }

        System.out.println(
            "Circle has larger area than 50: " +
            shapes[0].compareArea(50.0)
        );
    }
}
