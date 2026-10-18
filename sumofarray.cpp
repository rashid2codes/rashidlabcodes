//SET 2.P5
#include<iostream>
using namespace std;    

class ArraySum
{
    private:
    int arr[10];
    public:
    void input(){
        cout<<"Enter 10 elements of the array: ";
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
    }   
    int calculateSum(){
        int sum=0;
        for(int i=0;i<10;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }   
};
int main()
{
    ArraySum a1;
    a1.input();
    cout<<"Sum of array elements: "<<a1.calculateSum();
    return 0;
}