//SET 3.P4
#include<iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    float balance;
public:
    BankAccount(int acc,float bal){
        accountNumber = acc;
        balance = bal;
    }
    void display(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    void transfer(BankAccount &receiver,double amount){
        if(amount <= 0){
            cout<<"Invalid transfer amount."<<endl;
        }
        else if(amount > balance){
            cout<<"Insufficient funds."<<endl;
        }
        else{
            balance -= amount;
            receiver.balance += amount;
            cout<<"Transfer successful."<<endl;
        }
    }
  
    
};
int main(){
    BankAccount account1(12345, 1000.0);
    BankAccount account2(67890, 500.0);
    cout<<"Before transfer:"<<endl;
    account1.display();
    account2.display();
    double transferAmount;
    cout<<"Enter amount to transfer from account 1 to account 2: ";
    cin>>transferAmount;
    account1.transfer(account2, transferAmount);
    cout<<"After transfer:"<<endl;
    account1.display();
    account2.display();
    return 0;
}