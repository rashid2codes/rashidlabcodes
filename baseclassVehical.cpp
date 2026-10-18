//SET 5.P4
#include<iostream>
using namespace std;
class Vehicle{
    protected:
    string regNo;
    string companyName;
    public:
    Vehicle(string r, string c){
        regNo= r;
        companyName= c;
     }
    };
    class Car: public Vehicle{
        private:
        string fuelType;
        int engineCapacity;
        public:
        Car(string r, string c, string f, int e):Vehicle(r,c){
            fuelType= f;
            engineCapacity=e;
        }
    
   
    void display(){
        cout<<"Vehicle Details: "<<endl;
        cout<<"Registration Numner: "<<regNo<<endl;
        cout<<"Company: "<<companyName<<endl;
        cout<<"Fuel type: "<<fuelType<<endl;
        cout<<"Engine Capacity: "<<engineCapacity<<endl;
    }
    };
      class Bike: public Vehicle{
        private:
        string fuelType;
        int engineCapacity;
        public:
        Bike(string r, string c, string f, int e):Vehicle(r,c){
            fuelType= f;
            engineCapacity=e;
        }
        
    void display(){
        cout<<"Vehicle Details: "<<endl;
        cout<<"Registration Numner: "<<regNo<<endl;
        cout<<"Company: "<<companyName<<endl;
        cout<<"Fuel type: "<<fuelType<<endl;
        cout<<"Engine Capacity: "<<engineCapacity<<endl;
     }
      
     };
int main(){
    Car c1("JK05H3537)","Toyata","Petrol",1500);
    Car c2("JK05U4533","Suxuki","Petrol",1200);
    Bike b1("JK096756)","Splender","Diesel",330);
    Bike b2("JK963456","Bullet","Petrol",345);
    c1.display();
    c2.display();
    b1.display();
    b2.display();
    return 0;


}
