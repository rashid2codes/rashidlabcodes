//SET 5.P6
#include<iostream>
using namespace std; 
template <class T>
 T my_max(T a,T b){
    return a>b?a:b;
 }
 template<class T>
 void swapValues(T &a, T &b){
    T temp =a;
    a = b;
    b =temp;
 }
 int main(){
    int a =10, b = 20;
    cout<<"Maximum int: "<<my_max(a,b)<<endl;
    swapValues(a,b);
    cout<<"After Swap: "<<a<<" "<<b<<endl;

     
    float x =2.0, y = 2.7;
    cout<<"Maximum float: "<<my_max(x,y)<<endl;
    swapValues(x,y);
    cout<<"After Swap: "<<x<<" "<<y<<endl;

     
    double p =32.8, q = 34.5;
    cout<<"Maximum double: "<<my_max(p,q)<<endl;
    swapValues(p,q);
    cout<<"After Swap: "<<p<<" "<<q<<endl;

     
    char c1 ='R', c2 = 'S';
    cout<<"Maximum char: "<<my_max(c1,c2)<<endl;
    swapValues(c1,c2);
    cout<<"After Swap: "<<c1<<" "<<c2<<endl;
    return 0;


 }