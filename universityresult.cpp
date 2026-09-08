//SET 3.P 10
#include <iostream>
using namespace std;

class Result
{
    int rollNumber;
    int marks[5];

public:

    
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter marks of 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    int total()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }

        return sum;
    }

    void compare(Result r)
    {
        if (total() > r.total())
        {
            cout << "Roll No " << rollNumber
                 << " has higher marks." << endl;
        }
        else if (total() < r.total())
        {
            cout << "Roll No " << r.rollNumber
                 << " has higher marks." << endl;
        }
        else
        {
            cout << "Both students have equal marks." << endl;
        }
    }

    void display()
    {
        cout << "Roll Number: " << rollNumber << endl;

        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total() << endl;
    }

    friend Result topper(Result r1, Result r2, Result r3);
    friend Result graceMarks(Result r);
};


Result topper(Result r1, Result r2, Result r3)
{
    Result top = r1;

    if (r2.total() > top.total())
    {
        top = r2;
    }

    if (r3.total() > top.total())
    {
        top = r3;
    }

    return top;
}


Result graceMarks(Result r)
{
    int totalGrace = 0;

    for (int i = 0; i < 5; i++)
    {
        int grace;

        cout << "Enter grace marks for subject "
             << i + 1 << " (0 to 5): ";

        cin >> grace;

        if (grace > 5)
        {
            grace = 5;
        }

        if (totalGrace + grace > 20)
        {
            grace = 20 - totalGrace;
        }

        r.marks[i] += grace;
        totalGrace += grace;
    }

    return r;
}


int main()
{
    Result r1, r2, r3;

    cout << "Enter details of Student 1:\n";
    r1.input();

    cout << "\nEnter details of Student 2:\n";
    r2.input();

    cout << "\nEnter details of Student 3:\n";
    r3.input();


    cout << "\n--- Comparing Student 1 and Student 2 ---\n";
    r1.compare(r2);


    Result top = topper(r1, r2, r3);

    cout << "\n--- Topper ---\n";
    top.display();


    cout << "\n--- Apply Grace Marks to Student 1 ---\n";

    Result revised = graceMarks(r1);

    cout << "\nResult After Grace Marks:\n";
    revised.display();

    return 0;
}