//SET 5.P5
#include <iostream>
using namespace std;

class Account {
protected:
    int accountNumber;
    double balance;

public:
    Account(int a, double b) {
        accountNumber = a;
        balance = b;
    }

    virtual void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(int a, double b, double i) : Account(a, b) {
        interestRate = i;
    }

    void display() override {
        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public Account {
private:
    double tranctionlimit;

public:
    CurrentAccount(int a, double b, double o)
        : Account(a, b) {
        tranctionlimit = o;
    }

    void display() override {
        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Tranction Limit per Day: " << tranctionlimit << endl;
    }
};

int main() {

    SavingsAccount s1(101, 50000, 5.5);
    SavingsAccount s2(102, 75000, 6.0);

    CurrentAccount c1(201, 100000, 20);
    CurrentAccount c2(202, 80000, 15);

    s1.display();
    s2.display();

    c1.display();
    c2.display();

    return 0;
}