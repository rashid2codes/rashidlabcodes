//SET1.P12
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i <n;i++){
        cout<<"Enter element" <<i+1 <<":";
    cin>>arr[i];
    }
    int first = arr[0],second = -1;
    for(int i =1; i<n;i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }else if (arr[i]>second && arr[i] != first)
        {second = arr[i];
            
        }
        
    }
    cout<<"Second largest element is: "<< second <<endl;
    return 0;
}