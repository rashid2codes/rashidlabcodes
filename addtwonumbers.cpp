//SET 3. P1
#include<iostream>
using namespace std;
class Number{
    public:
    int n;
    public:
 
};
    Number addNumber(Number a ,Number b)
    {
        Number result;
        result.n = a.n + b.n;
        return result;
    }
    
int main()
{
    Number a,b;
    cout<<"Enter first number: ";
    cin>>a.n;
    cout<<"Enter second number: ";
    cin>>b.n;
    Number c = addNumber(a, b);
    cout<<"The sum is: "<<c.n<<endl;
    return 0;
}
