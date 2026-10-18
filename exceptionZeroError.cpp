//SET 6.P1
#include<iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter numenator: ";
    cin>>n;
    cout<<"Enter denominator: ";
    cin>>d;
    try{
        if(d==0){
            
                
            throw d;
            }
            cout<<"Result: "<<n/d<<endl;
        }
        catch (int){
            cout<<"Error:Division by zero is not allowed."<<endl;
        }
    return 0;
}