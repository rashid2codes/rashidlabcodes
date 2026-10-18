//SET 1.P10
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the elements to search: ";
    cin>> key;
    int index = -1;
    for(int i =0;i<n;i++){
        if(arr[i] == key){
            index = i;
            break;
        }
    }
    if(index != -1){
        cout<<"Element found at index: "<<index << endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
