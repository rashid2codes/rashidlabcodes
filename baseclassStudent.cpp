//SET 5.P1
#include<iostream>
using namespace std;
class Student{
    protected:
    string name;
    int rollNo;
    int age;
    public:
    Student(string n, int r,int a){
        name =n;
        rollNo = r;
        age= a;

    }
};
class EngineeringStudent: public Student{
    private: 
    string branch;
    int semester;
    public:
    EngineeringStudent(string n, int r,int a,string b,int s):Student(n,r,a){
        branch =b;
        semester= s;
    
}
void display(){
    cout<<"Student details: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll no: "<<rollNo<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Branch: "<<branch<<endl;
    cout<<"Semester: "<<semester<<endl;
}
};
int main(){
    EngineeringStudent s1("Rashid",20,19,"CSE",3);
    s1.display();
    return 0;
}