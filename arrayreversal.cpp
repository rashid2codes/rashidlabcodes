//SET 1.P13
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i <n;i++){
        cout<<"Enter element" <<i+1 <<":";
    cin>>arr[i];
    }
    int start =0,end = n-1;
    while (start<end)
    {int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed array: ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;    
}