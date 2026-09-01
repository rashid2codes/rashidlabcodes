//SET2 . P2
#include <iostream>
using namespace std;
class Rectangle
{
    private:
    float length;
    float breadth;
    public:
    void setData()
    {
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
    }
    float calculateArea()
    {
        return length * breadth;
    }
    void displayData()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"breadth: "<<breadth<<endl;
        cout<<"Area: "<<calculateArea()<<endl;
    }
};
int main()
{
    Rectangle r1;
    r1.setData();
    r1.displayData();
    return 0;
}