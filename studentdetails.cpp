//SET 2. P1
#include <iostream>
using namespace std;
class Student
{
    private:
    string name;
    int roll_no;
    public:
    void setData()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll_no;
    }
    void displayData()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<roll_no<<endl;
    }
};
int main()
{
    Student s1;
    s1.setData();
    s1.displayData();
    return 0;
}