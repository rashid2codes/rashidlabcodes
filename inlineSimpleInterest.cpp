//SET 4.P9
#include<iostream>
using namespace std;
class Interest{
    public:
    inline float
    calculateSI(float P, float R,float T){
        return (P*R*T)/100;
    }

};
int main(){
    Interest obj;
    float P=10000;
    float R= 5;
    float T= 2;
    float SI =obj.calculateSI(P,R,T);
    cout<<"Principal = "<<P<<endl;
    cout<<"Rate = "<<R<<"%"<<endl;
    cout<<"Time = "<<T<<"tears"<<endl;
    cout<<"Simple Interest = "<<SI<<endl;
    return 0;

}