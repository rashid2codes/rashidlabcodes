//SET 1 . P5
#include<iostream>
using namespace std;
int main(){
    int n, orginal, reverse = 0,digit;
cout<<"enter number";
cin>>n;
orginal =n;
while (n != 0){
    digit = n%10;
    reverse =reverse*10+digit;
    n = n/10;

}
if(orginal == reverse)
cout<<"Palindrome Number: ";
else
cout<<"Not palindrome; ";
return 0;
}
