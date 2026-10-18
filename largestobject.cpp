//SET 3.P2
#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    int marks;

};
Student findTop(Student s1,Student s2){
    if(s1.marks > s2.marks)
        return s1;
    else
        return s2;
}
int main(){
    Student s1,s2;
    cout<<"Enter roll number of student 1: ";
    cin>>s1.rollno;
    cout<<"Enter marks of student 1: ";
    cin>>s1.marks;
    cout<<"Enter roll number of student 2: ";
    cin>>s2.rollno;
    cout<<"Enter marks of student 2: ";
    cin>>s2.marks;
    Student topStudent = findTop(s1,s2);
    cout<<"Top student roll number: "<<topStudent.rollno<<endl;
    cout<<"Top student marks: "<<topStudent.marks<<endl;
    return 0;
}