//SET 2.P10
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int roll_no;
    float marks[5];
    public:
    Student(){
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student roll no: ";
        cin>>roll_no;
        cout<<"Enter marks of 5 subjects: ";
        for(int i = 0;i<5;i++){
            cin>>marks[i];

        }
    }
    float calculateTotal(){
        float total = 0;
        for(int i=0;i<5;i++){
            total = total+ marks[i];
        }
        return total;
    }
    float calculatePercentage(){
        return calculateTotal()/5;
    }
    char determineGrade(){
        float percentage= calculatePercentage();
        if(percentage >= 90)
        return 'A';
        else if(percentage >= 75)
        return 'B';
        else if(percentage>= 60)
        return 'C';
        else if(percentage >= 40)
        return 'D';
        else
        return 'F';
    }
    void displayResult(){
        cout<<"\n------Student Result------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Total Marks: "<<calculateTotal()<<endl;
        cout<<"Percentage: "<<calculatePercentage()<<endl;
        cout<<"Grade: "<<determineGrade()<<endl;    }
};
int main(){
    Student s;
    s.displayResult();
    return 0;
}