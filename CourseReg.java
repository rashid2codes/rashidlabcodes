//SET 2.P8
import java.util.ArrayList;
import java.util.HashMap;

class Course {
    String code;
    String name;
    int capacity;

    Course(String code, String name, int capacity) {
        this.code = code;
        this.name = name;
        this.capacity = capacity;
    }
}

class Student {
    String id;
    String name;

    Student(String id, String name) {
        this.id = id;
        this.name = name;
    }
}

public class CourseReg {

    static HashMap<String, Course> courses = new HashMap<>();

    static HashMap<String, ArrayList<Student>> registrations =
            new HashMap<>();

 
    static void addCourse(Course c) {
        if (courses.containsKey(c.code)) {
            System.out.println("Course already exists!");
            return;
        }

        courses.put(c.code, c);
        registrations.put(c.code, new ArrayList<Student>());

        System.out.println("Course added: " + c.name);
    }

  
    static void registerStudent(String code, Student s) {

        if (!courses.containsKey(code)) {
            System.out.println("Course not found!");
            return;
        }

        ArrayList<Student> list = registrations.get(code);
        Course c = courses.get(code);

      
        for (Student student : list) {
            if (student.id.equals(s.id)) {
                System.out.println("Student already registered!");
                return;
            }
        }

     
        if (list.size() >= c.capacity) {
            System.out.println("Course is full!");
            return;
        }

        list.add(s);
        System.out.println(s.name + " registered in " + c.name);
    }

  
    static void displayStudents(String code) {

        if (!courses.containsKey(code)) {
            System.out.println("Course not found!");
            return;
        }

        Course c = courses.get(code);
        ArrayList<Student> list = registrations.get(code);

        System.out.println("\nStudents in " + c.name + ":");

        if (list.isEmpty()) {
            System.out.println("No students registered.");
            return;
        }

        for (Student s : list) {
            System.out.println(s.id + " - " + s.name);
        }
    }

    public static void main(String[] args) {

     
        addCourse(new Course("C101", "Java", 2));
        addCourse(new Course("C102", "Python", 3));

        
        Student s1 = new Student("101", "Rashid");
        Student s2 = new Student("102", "Tanush");
        Student s3 = new Student("103", "Rahul");

        registerStudent("C101", s1);
        registerStudent("C101", s2);
        registerStudent("C101", s3);

        registerStudent("C101", s1); 

        displayStudents("C101");
        displayStudents("C102");
    }
}