//SET 4. P4
#include<iostream>
using namespace std;
class Distance{
   
    public:
    int feet;
    int inch;
    Distance(int f= 0,int i=0){
        feet =f;
        inch =i;
    }
    Distance operator+(Distance d){
        Distance temp;
        temp.feet =feet + d.feet;
        temp.inch =inch +d.inch;
          if(temp.inch >=12){
            temp.feet = feet +=temp.inch/12;
            temp.inch= temp.inch%12;
          }
        return temp;
    }
    void display(){
        cout<<feet<<" ft "<<inch<<" in "<<endl;
    }
};
int main(){
    Distance d1(3,4);
    Distance d2(2,5);
Distance d3= d1 + d2;
    cout<<"Result: ";d3.display();
}
