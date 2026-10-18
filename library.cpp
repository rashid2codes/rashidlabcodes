//SET 2.Challenge Problem
#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    string title;
    string author;
    int price;

public:
    // Constructor
    Library()
    {
        title = "";
        author = "";
        price = 0;
    }

    Library(string t, string a, int p)
    {
        title = t;
        author = a;
        price = p;
    }

    // Display book details
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "----------------------" << endl;
    }

    // Search title
    bool search(string searchTitle)
    {
        return title == searchTitle;
    }
};

int main()
{
    Library books[10] =
    {
        Library("C++ Programming", "Bjarne Stroustrup", 500),
        Library("Java Programming", "James Gosling", 450),
        Library("Python Basics", "John Smith", 400),
        Library("Data Structures", "Mark Allen", 550),
        Library("Computer Networks", "Andrew Tanenbaum", 600),
        Library("Operating System", "Galvin", 650),
        Library("Database System", "Raghu Ramakrishnan", 700),
        Library("Web Technology", "Thomas Powell", 450),
        Library("Software Engineering", "Ian Sommerville", 550),
        Library("Machine Learning", "Tom Mitchell", 800)
    };

    string searchTitle;

    cout << "Enter book title to search: ";
    getline(cin, searchTitle);

    bool found = false;

    for (int i = 0; i < 10; i++)
    {
        if (books[i].search(searchTitle))
        {
            cout << "\nBook Found!\n";
            books[i].display();
            found = true;
        }
    }

    if (!found)
    {
        cout << "Book not found." << endl;
    }

    return 0;
}