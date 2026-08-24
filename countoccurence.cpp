//SET 1.P11
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter  elements "<< i+1<<": ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to count: ";
    cin>>key;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            count++;
        }
    }
    cout<<"Element"<< key<<"occurs"<<count<< "times"<<endl;
    return 0;

}