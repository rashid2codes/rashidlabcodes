//SET 4.P7
#include<iostream>
using namespace std;
class Number{
    private:
    int a,b;
    public:
    Number(int x,int y){
        a= x;
        b=y;
    }
    friend void findLargest(Number n);
};
void findLargest(Number n){
    if( n.a > n.b)
    cout<<"Largest = "<<n.a;
    else
    cout<<"Largest = "<<n.b;
}
int main(){
    Number n(23,87);
    cout<<"Numbers: 23 and 87"<<endl;
    findLargest(n);
    return 0;
}