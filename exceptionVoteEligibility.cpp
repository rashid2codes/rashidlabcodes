//SET 6. P 6
#include<iostream>
using namespace std;
class Vote{
    public:
    const char*what() const{
        return "Not Eligible to vote";
    }
};
int main(){
    int age;
    cout<<"Enter the age: ";
    
        cin>>age;
    
   
    try{
        if(age< 18)
        {
            throw Vote();
        }
        
    }
    catch(Vote &e){
        cout<<e.what()<<endl;
    }
    return 0;
    
}