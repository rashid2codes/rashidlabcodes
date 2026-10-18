//SET 2.P1
public class Student {
    private int rollno;
    private String name;
    private int  m1,m2,m3;
    

    Student(int rollno, String name, int m1, int m2, int m3) {
        this.rollno = rollno;
        this.name = name;
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
    }
    public int getRollno(){
        return rollno;
    }
    public String getName(){
        return name;
    }
    public int calculateTotal(){
        return m1 + m2 + m3;
    }
    public double calculatepercentage(){
        return (calculateTotal()/300.0 )*100;
    }
    public String calculateGrade(){
        double percentage = calculatepercentage();
        if(percentage >=90)
            return "A";
        else if(percentage >=75)
            return "B";
        else if(percentage >=60)
            return "C";
        else
            return "D";

    }
    public void displayResult(){
        System.out.println("Roll Number: " + getRollno());
        System.out.println("Name: " + getName());
        System.out.println("Total Marks: " + calculateTotal() + " / 300");
        System.out.println("Percentage: " + calculatepercentage() + "%");
        System.out.println("Grade: " + calculateGrade());
    }
    public static void main(String[] args) {
        Student s1 = new Student(2512020,"Rashid Rafiq Parray", 85, 90, 95);
        s1.displayResult();
    }
}
