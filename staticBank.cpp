//SET 4.P6
#include<iostream>
using namespace std;
class BankAccount{
    static int count;
    private:
    int accountNumber;
    string name;
    static int totalAccounts;
    public:
    BankAccount(int accNo,string n){
        accountNumber= accNo;
        name = n;
        totalAccounts++;
    }
    static void displayAccounts(){
        cout<<"Total  Bank Accounts: "<<totalAccounts<<endl;
    }
        };
    int BankAccount::totalAccounts=0;
    int main(){
        BankAccount b1(100,"Rashid");
        BankAccount b2(101,"Tanush");
        BankAccount b3(102,"Dristi");
        BankAccount::displayAccounts();
        return 0;
    }