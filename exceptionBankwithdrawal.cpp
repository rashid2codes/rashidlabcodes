//SET 6.P3
#include<iostream>
using namespace std;
class BankAccount{
    private:
    double balance;
    public:
    BankAccount( double b){
        balance = b;
    }
    void withdraw(double amount)
    try{
        if(balance < amount)
        {
            throw "Error: Insufficient Balance";
        }
        balance = balance-amount;
        cout<<"Withdrawal Successful."<<endl;
        cout<<"Remaining Balance: "<<balance<<endl;

    }
    catch( const char*what){
        cout<<what<<endl;
    }
};
int main(){
    double balance, amount;
    cout<<"Enter Balance: ";
    cin>>balance;
    cout<<"Enter withdrawal: ";
    cin>>amount;
    BankAccount account(balance);
    account.withdraw(amount);
    return 0;
}