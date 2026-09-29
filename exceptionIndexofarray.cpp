//SET 6. P 5
#include<iostream>
using namespace std;
class IndexOut{
    public:
    const char*what() const{
        return "Error: Array Index Out of Bonds";
    }
};
int main(){
    int arr[10];
    cout<<"Enter 10 elements: ";
    for(int i =0;i<10;i++){
        cin>>arr[i];
    }
    int index;
    cout<<"Enter index: ";
    cin>>index;
    try{
        if(index <0 || index > 9)
        {
            throw IndexOut();
        }
        cout<<"Element= "<<arr[index]<<endl;
    }
    catch(IndexOut &e){
        cout<<e.what()<<endl;
    }
}