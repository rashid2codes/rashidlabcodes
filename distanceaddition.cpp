//SET 3.P3
#include<iostream>
using namespace std;
class Distance{
    public:
    int feet;
    float inches;
    Distance(int f=0,float i=0){
        feet=f;
        inches=i;
    }
    Distance add(Distance add){
        Distance total;
        total.feet=feet+add.feet;
        total.inches=inches+add.inches;
    if(total.inches>=12.0){
        total.inches-=12.0;
        total.feet++;
    }
    return total;
    }
    void display()
      {  cout<<"Feet: "<<feet<<endl;
        cout<<"Inches: "<<inches<<endl;
    
      }

};
int main(){
    Distance d1,d2,d3;
    cout<<"Enter feet and inches for distance 1: ";
    cin>>d1.feet>>d1.inches;
    cout<<"Enter feet and inches for distance 2: ";
    cin>>d2.feet>>d2.inches;
    d3=d1.add(d2);
    cout<<"Total distance is: "<<endl;
    d3.display();
    return 0;
}