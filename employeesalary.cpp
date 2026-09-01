//SET 2. P7
#include<iostream>
using namespace std;
class Employee
{
private:
string emplyeeName;
int basicSalary;
public:
void displayDetails()
{
    cout<<"Employee Name: ";
    cin>>emplyeeName;
    cout<<"Enter Basic Salary: ";
    cin>>basicSalary;
}
int calculateHRA()
{
    return (basicSalary*20)/100;
}
int calculateDA()
{
    return (basicSalary*10)/100;
}
int calculateGrossSalary()
{
    return basicSalary+calculateHRA()+calculateDA();
}
};
int main(){
    
    Employee e1;
    e1.displayDetails();
    cout<<"HRA: "<<e1.calculateHRA()<<endl;
    cout<<"DA: "<<e1.calculateDA()<<endl;
    cout<<"Gross Salary: "<<e1.calculateGrossSalary()<<endl;
    return 0;
}