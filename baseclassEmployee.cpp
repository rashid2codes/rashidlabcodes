//SET 5.P2
#include<iostream>
using namespace std;
class Employee{
    protected:
    int employeeId;
    string name;
public:
Employee(int id, string n){
    employeeId= id;
    name= n;
}
};
class Manager: public Employee{
    private:
    string department;
    double salary;
    public:
    Manager(int id,string n, string d,double s):Employee(id,n){
        department=d;
        salary=s;
    }
    void display(){
        cout<<"Employee Details: "<<endl;
        cout<<"Employee ID: "<<employeeId<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Department: "<<department<<endl;
        cout<<"Employee Salary: "<<salary<<endl;

    }
};
int main(){
    Manager emps[5]={
        Manager(1,"Rashid","CS",90000),
    Manager(2,"Tanush","IT",80000),
    Manager(3,"Dristi","AI",80000),
    Manager(4,"Archit","SRO",60000),
    Manager(5,"Saniya","Health",90000)
    };
    for(int i=0;i<5;i++){
        emps[i].display();
    }
    return 0;
}