//SET 3.P3
public class Employee {
     int employeeId;
     String employeeName;
    double salary;
    double HRA;
    double DA;
    double Bonus;
    double gross;
    Employee(int a, String n, double s) {
        employeeId = a;
        employeeName = n;
        salary = s ;
    }

    
    public void grossSalary(){
        HRA = (0.2)*salary;
        DA = (0.1)*salary;
        Bonus = (0.05)*salary;
        gross = salary + HRA + DA + Bonus;
        System.out.println("Gross Salary: " + gross);
    
    
    
    }
    public void displayDetails(){
        System.out.println("Employee ID: "+employeeId);
        System.out.println("Name: " +employeeName);
        System.out.println("Salary: " +salary);
        System.out.println("Gross Salary: " + gross); 




    }

    
    public static void main(String[] args) {
        Employee e1 = new Employee(101, "Rashid", 50000);
        e1.displayDetails();
        e1.grossSalary();
    }
}