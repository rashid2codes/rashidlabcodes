//SET 3. P 6
#include<iostream>
using namespace std;
class Employee{
    public:
    int name;
    float salary;
    Employee(){
        name = 0;
        salary = 0.0;
    }
    Employee(int n,float s){
        name = n;
        salary = s;
    }

};
Employee highestSalary(Employee e1,Employee e2){
    if(e1.salary > e2.salary)
        return e1;
    else
        return e2;
}
Employee incrementSalary(Employee e,float increment){
    e.salary= e.salary + increment*0.01*e.salary;
    return e;
}
int main(){
    Employee e1,e2;
    cout<<"Enter name and salary of employee 1: ";
    cin>>e1.name>>e1.salary;
    cout<<"Enter name and salary of employee 2: ";
    cin>>e2.name>>e2.salary;
    Employee topEmployee = highestSalary(e1,e2);
    cout<<"Employee with highest salary:"<<endl;
    cout<<"Name: "<<topEmployee.name<<endl;
    cout<<"Salary: "<<topEmployee.salary<<endl;
    float increment;
    cout<<"Enter increment percentage for employee 1: ";
    cin>>increment;
    e1=incrementSalary(e1,increment);
    cout<<"Updated salary of employee 1: "<<e1.salary<<endl;
    return 0;
}