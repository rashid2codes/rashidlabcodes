//SET 5.P10
#include <iostream>
#include <string>
using namespace std;


class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};


class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(string n, int a, string s)
        : Person(n, a)
    {
        subject = s;
    }

    void display()
    {
        cout << "Teacher Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
    }
};

class ResearchScholar : public Person
{
private:
    string researchTopic;

public:
    ResearchScholar(string n, int a, string r)
        : Person(n, a)
    {
        researchTopic = r;
    }

    void display()
    {
        cout << "Scholar Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Research Topic: " << researchTopic << endl;
    }
};


template <class T>
class RecordManager
{
private:
    T record;

public:
   
    RecordManager(T r)
        : record(r)
    {
    }

    void displayRecord()
    {
        record.display();
    }
};

int main()
{
    
    Teacher t1("Rashid", 35, "C Programming");

    RecordManager<Teacher> teacherRecord(t1);

  
    teacherRecord.displayRecord();

    cout << endl;

    ResearchScholar r1("Tanush", 20, "Artificial Intelligence");

    RecordManager<ResearchScholar> scholarRecord(r1);

    scholarRecord.displayRecord();

    return 0;
}