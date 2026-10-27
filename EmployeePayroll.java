//SET 3.P6
abstract class Employee {
    String name;

    Employee(String name) {
        this.name = name;
    }

    abstract double calculateSalary();

    void display() {
        System.out.println(name + ": " + calculateSalary());
    }
}

class PermanentEmployee extends Employee {
    double monthlySalary;

    PermanentEmployee(String name, double salary) {
        super(name);
        monthlySalary = salary;
    }

    @Override
    double calculateSalary() {
        return monthlySalary;
    }

    double calculateSalary(double bonus) {
        return monthlySalary + bonus;
    }
}

class ContractEmployee extends Employee {
    int days;
    double dailyRate;

    ContractEmployee(String name, int days, double rate) {
        super(name);
        this.days = days;
        dailyRate = rate;
    }

    @Override
    double calculateSalary() {
        return days * dailyRate;
    }
}

class CommissionEmployee extends Employee {
    double sales;
    double rate;

    CommissionEmployee(String name, double sales, double rate) {
        super(name);
        this.sales = sales;
        this.rate = rate;
    }

    @Override
    double calculateSalary() {
        return sales * rate / 100;
    }

}

public class EmployeePayroll {
    public static void main(String[] args) {
        Employee[] employees = {
            new PermanentEmployee("Rashid", 40000),
            new ContractEmployee("Dravin", 20, 1000),
            new CommissionEmployee("Tanush", 100000, 5)
        };

        for (Employee e : employees) {
            e.display();
        }

        PermanentEmployee p = new PermanentEmployee("Rashid", 40000);
        System.out.println("Salary with bonus: " +
                           p.calculateSalary(5000));
    }
}


