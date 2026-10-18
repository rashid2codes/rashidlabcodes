//SET 2.P9
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Collections;

class Employee {
    int id;
    String name;
    String department;
    double salary;

    Employee(int id, String name, String department, double salary) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }

    void display() {
        System.out.println("ID: " + id
                + ", Name: " + name
                + ", Department: " + department
                + ", Salary: " + salary);
    }
}

public class EmployeeDirectory {
    public static void main(String[] args) {

        ArrayList<Employee> employees = new ArrayList<>();

        employees.add(new Employee(101, "Aamir", "IT", 50000));
        employees.add(new Employee(102, "Sara", "HR", 60000));
        employees.add(new Employee(103, "Rahul", "IT", 45000));
        employees.add(new Employee(104, "Zoya", "Finance", 80000));
        employees.add(new Employee(105, "John", "IT", 70000));

      
        System.out.println("Employees Sorted by Salary:");

        ArrayList<Employee> bySalary = new ArrayList<>(employees);

        Collections.sort(bySalary,
                Comparator.comparingDouble(e -> e.salary));

        for (Employee e : bySalary) {
            e.display();
        }

      
        System.out.println("\nEmployees Sorted by Name:");

        ArrayList<Employee> byName = new ArrayList<>(employees);

        Collections.sort(byName,
                Comparator.comparing(e -> e.name));

        for (Employee e : byName) {
            e.display();
        }

   
        String searchDepartment = "IT";

        System.out.println("\nEmployees in " + searchDepartment
                + " Department:");

        for (Employee e : employees) {
            if (e.department.equalsIgnoreCase(searchDepartment)) {
                e.display();
            }
        }

        System.out.println("\nTop 3 Highest-Paid Employees:");

        ArrayList<Employee> byHighestSalary =
                new ArrayList<>(employees);

        Collections.sort(byHighestSalary,
                Comparator.comparingDouble((Employee e) -> e.salary)
                        .reversed());

        int limit = Math.min(3, byHighestSalary.size());

        for (int i = 0; i < limit; i++) {
            byHighestSalary.get(i).display();
        }
    }
}