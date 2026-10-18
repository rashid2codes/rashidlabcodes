// SET 2 . P6
import java.util.HashSet;
import java.util.Objects;

class Student {
    int regNo;
    String name;

    Student(int regNo, String name) {
        this.regNo = regNo;
        this.name = name;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;

        if (!(obj instanceof Student))
            return false;

        Student s = (Student) obj;
        return regNo == s.regNo;
    }

    @Override
    public int hashCode() {
        return Objects.hash(regNo);
    }

    void display() {
        System.out.println("Registration No: " + regNo
                + ", Name: " + name);
    }
}

public class StudentRegs {
    public static void main(String[] args) {

        HashSet<Student> students = new HashSet<>();

        Student s1 = new Student(101, "Rashid Rafiq Parray");
        Student s2 = new Student(101, "Dristi Raina");
        Student s3 = new Student(102, "Tanus Sharma");

        students.add(s1);
        students.add(s2);
        students.add(s3);

        System.out.println("Registered Students:");

        for (Student s : students) {
            s.display();
        }

        Student s4 = new Student(101, "Unknown");

        if (students.contains(s4)) {
            System.out.println("Student 101 is already registered.");
        } else {
            System.out.println("Student is not registered.");
        }
    }
}