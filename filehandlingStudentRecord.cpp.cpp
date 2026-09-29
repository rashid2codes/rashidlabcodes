//SET 6.P8
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int rollNo;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    ofstream file("student.txt");
    

    if (!file)
    {
      cout<<"Error opening file"<<endl;

        return 1;

    }
    file << rollNo << " " << name << " " << marks << endl;
   file.close();
   cout<<"Data entered successfully"<<endl;
   
    }

