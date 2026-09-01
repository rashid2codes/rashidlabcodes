//SET2. P6
#include<iostream>
using namespace std;
class Text{
    private:
        string str;
    public:
        void input(){
            cout<<"Enter a string: ";
            cin>>str;
        }
        int calculateLength(){
            int length=0;
            while(str[length]!='\0'){
                length++;
            }
        return length;
    }

};
int main()
{
    Text t1;
    t1.input();
    cout<<"Length of the string: "<<t1.calculateLength();
    return 0;
}