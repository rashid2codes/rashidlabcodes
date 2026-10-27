//SET 3.P1
class Person{
    String name;
    int age;
    
   Person(String name,int age){
    this.name = name;
    this.age = age;
    System.out.println("First Person Constructor Called ");
   } 
}
class Employee extends Person{
    int id;
    double salary;
    Employee(String name,int age,int id,double salary){
        super(name, id);
        this.id = id;
        this.salary = salary;
        System.out.println("Second Employee Constructor called");
    }
}
class Developer extends Employee{
    String language,project;
    Developer(String name,int age , int id, double salary,String langauge,String project){
        super(name, age, id, salary);
        this.language = langauge;
        this.project = project;
        System.out.println("Third Developer constructor called ");
    }


void display(){
    System.out.println("Employee Name: "+ name);
    System.out.println("Age: " + age);
    System.out.println("Employee ID: " + id);
    System.out.println("Salary: " + salary);
    System.out.println("Language: " + language);
    System.out.println("Project: " + project);
}
}
public class PersonE{
    public static void main(String[] args) {
        Developer d = new Developer("Rashid ", 20, 101, 90000, "Java", "Mini ShopEase");
        d.display();
    }

}