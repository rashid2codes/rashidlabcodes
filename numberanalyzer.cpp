//SET2. P3
#include<iostream>
using namespace std;
class Number
{
    private:
    int num;
    public:
    void input(){
        cout<<"Enter a number: ";
        cin>>num;
    }
    bool isEven(){
      if(  num%2==0){
        cout<<"Number is even";
        return true;
      }
      else{
      return false;
    }}
    void displayResults(){
        if(isEven()){
            cout<<"The number is even.";
        }
        else{
            cout<<"The number is odd.";
        }
    }
    };
    int main()
    {
        Number n1;
        n1.input();
        n1.isEven();
        n1.displayResults();
        return 0;

    }



