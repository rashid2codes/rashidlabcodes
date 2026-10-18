//SET 6.P2
#include<iostream>
#include<math.h>
using namespace std;
class NegativeNumberException{
    public:
    const char*what() const{
        return "Error: Square root of a negative number cannot be calculated";
    }
};
int main(){
    double n;
    cout<<"Enter the number: ";
    cin>>n;
    try{
        if(n<0)
        {
            throw NegativeNumberException();
        }
        cout<<"Square root= "<<sqrt(n)<<endl;
    }
    catch(NegativeNumberException &e){
        cout<<e.what()<<endl;
    }
    return 0;
}