//SET 4.P1
#include<iostream>
using namespace std;
class Area{
    public:
    int calculate (int side){
        cout<<"Area of a square = "<<side*side<<endl;
    }
    int calculate(int length ,int width){
        cout<<"Area of a rectangle= "<<length*width<<endl;
    }
    double calculate(double radius){
        cout<<"Area of a circle= "<<3.14*radius*radius<<endl;
    }
};
int main(){
    Area a;
    a.calculate(5);
    a.calculate(5,6);
    a.calculate(1.2);
    return 0;
}