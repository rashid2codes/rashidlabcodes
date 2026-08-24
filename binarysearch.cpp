//SET 1.P14
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in sorted (ascending) order: "<<endl;
    for(int i=0;i <n;i++){
        cout<<"Enter element " <<i+1 <<":";
    cin>>arr[i];
    }
    int key;
cout<<"Enter the element to search: ";
cin>>key;
int low = 0,high = n-1;
int index = -1;
while (low <= high){
    int mid = (low + high)/2;
    if(arr[mid] == key){
        index = mid;
        break;

    }
    else{high = mid-1;}
}
if(index != -1){
    cout<<"Element found at index: "<<index<<endl;
}else{
    cout<<"Element not found"<<endl;
}
return 0;

}