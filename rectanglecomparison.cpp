//SET 3.P7
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l = 0, int w = 0)
    {
        length = l;
        width = w;
    }

    // Member function to compare area
    bool isEqualArea(Rectangle r)
    {
        return (length * width) == (r.length * r.width);
    }

    // Display rectangle
    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Area = " << length * width << endl;
    }

    // Friend function declaration
    friend Rectangle merge(Rectangle r1, Rectangle r2);
};

// Non-member function
Rectangle merge(Rectangle r1, Rectangle r2)
{
    Rectangle result;

    result.length = r1.length + r2.length;
    result.width = r1.width + r2.width;

    return result;
}

int main()
{
    Rectangle r1, r2, r3;

    int l, w;

    cout << "Enter length and width of Rectangle 1: ";
    cin >> l >> w;
    r1 = Rectangle(l, w);

    cout << "Enter length and width of Rectangle 2: ";
    cin >> l >> w;
    r2 = Rectangle(l, w);

    // Compare areas
    if (r1.isEqualArea(r2))
    {
        cout << "\nBoth rectangles have equal area." << endl;
    }
    else
    {
        cout << "\nBoth rectangles do not have equal area." << endl;
    }

    // Merge rectangles
    r3 = merge(r1, r2);

    cout << "\nMerged Rectangle:" << endl;
    r3.display();

    return 0;
}