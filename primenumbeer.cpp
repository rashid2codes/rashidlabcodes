//SET 1. P2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>> n;
    bool isPrime=true;
    if(n <= 1){
        isPrime = false;
    }
    else{
        for(int i = 2;i<=n/2; i++){
            if(n% i==0){
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime)
    cout<<"is a Prime number."; 
    else
    cout<<"is not a Prime number.";
    return 0;




}
   