//SET 6. P 4
#include<iostream>
using namespace std;
class MarksValidation{
    public:
    const char*what() const{
        return "Invalid Marks! Marks should be between 0 and 100";
    }
};
int main(){
    int marks;
    cout<<"Enter the marks: ";
    
        cin>>marks;
    
   
    try{
        if(marks<0 || marks > 100)
        {
            throw MarksValidation();
        }
        
    }
    catch(MarksValidation &e){
        cout<<e.what()<<endl;
    }
}