//SET 1.P9
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element"<<i+1<<":";
        cin>>arr[i];
    }
    int minVal = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<minVal){
            minVal= arr[i];
        }
    }
    cout<<"Minimum elements is : "<<minVal <<endl;
    return 0;
}