//SET 2.P9
#include<iostream>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    float balance;
    public:
  BankAccount(int accNo,float bal){
    accountNumber= accNo;
    balance= bal;
  }
  void deposit(float amount){
    balance = balance + amount;
    cout<<"Amount deposited successfully."<<endl;
  }
  void withdraw(float amount){
    if(amount <= balance){
        balance = balance - amount;
        cout<<"Amount withdraw successfully."<<endl;
    }
    else{
        cout<<"Insufficient balance."<<endl;

    }}
    void displayBalance(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Current balance: "<<balance<<endl;
    }
  };
int main(){
    BankAccount b1(1856,5000);
    b1.displayBalance();
    b1.deposit(500);
    b1.displayBalance();
    b1.withdraw(4500);
     b1.displayBalance();
     return 0;
    


}