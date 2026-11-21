//SET 4.P10
class InvalidAgeException extends Exception {
    InvalidAgeException(String message) {
        super(message);
    }
}

class Student {
    String name;
    int age;

    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void checkEligibility() throws InvalidAgeException {

        if (age < 18) {
            throw new InvalidAgeException(
                "Student is not eligible");
        }

        else {
            System.out.println("Student is Eligible");
        }
    }
}

public class SET4P10 {
    public static void main(String[] args) {

        Student s = new Student("Rashid", 20);

        try {
            s.checkEligibility();
        }

        catch (InvalidAgeException e) {
            System.out.println(e.getMessage());
        }
    }
}