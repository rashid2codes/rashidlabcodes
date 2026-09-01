//SET 2.P8
#include<iostream>
using namespace std;
class Marks{
    private:
    int arr[5];
    public:
    void setDetails(){
        cout<<"Enter marks of 5 students: ";
        for(int i=0;i<5;i++){
            cin>>arr[i];

        }
    }
    int findHighestMarks(){
        int max=arr[0];
        for(int i=0;i<5;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
    void  displayMarks(){
        cout<<"Marks of students: ";
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
    }

};
int main(){
    Marks m1;
    m1.setDetails();
    cout<<"Highest marks: "<<m1.findHighestMarks();
    return 0;
}