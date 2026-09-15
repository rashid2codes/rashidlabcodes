//SET 4.P3
#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int img;
    Complex(int r= 0,int i=0){
        real =r;
        img =i;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.real =real + c.real;
        temp.img =img +c.img;
        return temp;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    Complex c1(3,4);
    Complex c2(2,5);
    Complex c3= c1 + c2;
    cout<<"Result: ";c3.display();
}