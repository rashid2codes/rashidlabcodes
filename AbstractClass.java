//SET 4.P1
abstract class Employee{
    private String name;
    private int empId;

    Employee(String name, int empId){
        this.name = name;
        this.empId = empId;
    }

abstract double calculateSalary();
void displayDetails(){
    System.out.println("Name: " + name);
    System.out.println("Employee ID: " + empId);
    System.out.println("Salary: " + calculateSalary());
}

}
class PermanentEmployee extends Employee{
   
    double basic,hra,da;
    PermanentEmployee(String name, int empId,double basic, double hra, double da){
        super(name, empId);
        this.basic = basic;
        this.hra = hra;
        this.da = da;
    }
    double calculateSalary(){
        return  basic + hra + da;
    }
}
class ContractEmployee extends  Employee{
    int hours;
    double rate;
    ContractEmployee(String name, int empId, double basic, double hra, double da, int hours, double rate){
        super(name, empId);
        this.hours = hours;
        this.rate = rate;
    }
    double calculateSalary(){
        return  hours*rate;
    }
}




public class AbstractClass {
    public static void main(String[] args) {
        Employee e1 = new PermanentEmployee("Rashid", 101, 45000, 5000, 3000);
        Employee e2 = new ContractEmployee("Ankit", 121, 30000, 3000, 2000, 40, 500);
        e1.displayDetails();
        System.out.println();
        e2.displayDetails();
    }
    
}
