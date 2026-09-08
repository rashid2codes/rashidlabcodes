//SET 3.P5
#include<iostream>
using namespace std;
class Complex{
    public:
    float real;
    float imag;
    Complex add(Complex c){
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
    Complex multiply(Complex c){
        Complex result;
        result.real = real * c.real - imag * c.imag;
        result.imag = real * c.imag + imag * c.real;
        return result;
    }
    void display(){
        cout<<"Real: "<<real<<endl;
        cout<<"Imaginary: "<<imag<<endl;
    }
};
Complex Substract(Complex c1, Complex c2){
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}
int main(){
    Complex c1,c2,c3;
    cout<<"Enter real and imaginary parts of complex number 1: ";
    cin>>c1.real>>c1.imag;
    cout<<"Enter real and imaginary parts of complex number 2: ";
    cin>>c2.real>>c2.imag;
    c3 = c1.add(c2);
    cout<<"Sum of complex numbers:"<<endl;
    c3.display();
    c3 = c1.multiply(c2);
    cout<<"Product of complex numbers:"<<endl;
    c3.display();
    c3 = Substract(c1,c2);
    cout<<"Difference of complex numbers:"<<endl;
    c3.display();
    return 0;
}