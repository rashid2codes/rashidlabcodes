//SET 2.P4
#include<iostream>
using namespace std;
class Book
{   public:
        string title;
    string author;
    Book(string t,string a){
        title = t;
        author = a;
    }
    void displayDetails(){
        cout<<"Book title: "<<title<<endl;
        cout<<"Book author: "<<author<<endl;
    }

};
int main()
{
    Book b1("The Amazon Forest","Krishna Kumar");
    b1.displayDetails();
    return 0;
}