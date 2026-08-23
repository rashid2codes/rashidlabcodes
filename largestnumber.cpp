//SET 1.P1

#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter three  numbers:";
    cin>> n1>> n2>> n3;
    if(n1>=n2 && n1 >= n3)
    cout<<"largest = "<<n1;
    else if (n2 >= n1 && n2 >= n3)
    cout<<"largest = "<<n2;
    else
    cout<<"largest = "<<n3;
    }