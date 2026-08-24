//SET 1.P6
#include<iostream>
using namespace std;
int main(){
    int n=123,sum=0,digit;
    while(n!=0){
        digit = n%10;
        sum =sum+digit;
        n = n/10;
    }
    cout<<sum;
    return 0;
}