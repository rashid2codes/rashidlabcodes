//SET 4.P8
#include<iostream>
using namespace std;
class B;
class A{
int a;
public:
A(){
    a=10;
}
friend int sum(A,B);
};
class B{
    private:
    int b;
    public:
    B(){
        b=20;
    }
    friend int sum(A,B);
};
int sum(A obj1, B obj2){
  return obj1.a + obj2.b;  
}
int main(){
    A objA;
    B objB;
    cout<<"A = 10"<<endl;
    cout<<"B = 20"<<endl;
    cout<<"Sum = "<<sum(objA,objB)<<endl;
    return 0;
}