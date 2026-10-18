//SET 5.P 7
#include <iostream>
using namespace std;

template <class T>
class Pair
{
private:
    T a, b;

public:
    
    Pair(T x, T y)
    {
        a = x;
        b = y;
    }

    
    T maximum()
    {
        if (a > b)
            return a;
        else
            return b;
    }

    
    T minimum()
    {
        if (a < b)
            return a;
        else
            return b;
    }

    
    void display()
    {
        cout << "First value: " << a << endl;
        cout << "Second value: " << b << endl;
        cout << "Maximum: " << maximum() << endl;
        cout << "Minimum: " << minimum() << endl;
    }
};

int main()
{
    
    Pair<int> p1(10, 20);

    cout << "Integer Pair" << endl;
    p1.display();

    cout << endl;

    
    Pair<float> p2(5.5, 2.3);

    cout << "Floating Point Pair" << endl;
    p2.display();

    return 0;
}