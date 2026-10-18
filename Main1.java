import java.util.Scanner;

class Student {
    int rollno;
    String name;
    float[] marks = new float[3];
    double p;
    float sum = 0;

    Student(int r, String s) {
        rollno = r;
        name = s;
    }

    void marks() {
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 3; i++) {
            System.out.println("Enter marks of subject " + (i + 1));
            marks[i] = sc.nextFloat();
        }
    }

    void calculate() {
        sum = 0;

        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }

        System.out.println("Total marks: " + sum);
    }

    void totalPercentage() {
        p = (sum / 300) * 100;
        System.out.println("Total percentage: " + p + "%");
    }

    void grade() {
        if (p >= 90) {
            System.out.println("Grade: A");
        } else if (p >= 75) {
            System.out.println("Grade: B");
        } else if (p >= 60) {
            System.out.println("Grade: C");
        } else {
            System.out.println("Grade: D");
        }
    }

    void display() {
        System.out.println("Roll no.: " + rollno);
        System.out.println("Name: " + name);
    }
}

public class Main1 {
    public static void main(String[] args) {
        Student s = new Student(10, "DR");

        s.display();
        s.marks();
        s.calculate();
        s.totalPercentage();
        s.grade();
    }
}