//SET 6.P7
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter expression : ";
    cin >> a >> op >> b;

    try
    {
        if (op == '+')
        {
            cout << "Result = " << a + b << endl;
        }
        else if (op == '-')
        {
            cout << "Result = " << a - b << endl;
        }
        else if (op == '*')
        {
            cout << "Result = " << a * b << endl;
        }
        else if (op == '/')
        {
            if (b == 0)
                throw 1;   

            cout << "Result = " << (double)a / b << endl;
        }
        else
        {
            throw op;    
        }
    }

    catch (int)
    {
        cout << "Division by Zero Error." << endl;
    }

    catch (char)
    {
        cout << "Invalid Operator." << endl;
    }

    return 0;
}
